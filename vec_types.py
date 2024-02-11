import sys

if __name__ == '__main__':
    if len(sys.argv) != 2:
        print("Usage: python generator.py [output_file]")
        sys.exit(1)

    v_types = [["vec", "float"], ["ivec", "float"], ["uvec", "uint"]]
    v_element_names = [
        ["x", "y", "z", "w"],
        ["r", "g", "b", "a"],
        ["_0", "_1", "_2", "_3"],
    ]

    with open(sys.argv[1], 'w') as f:
        f.write("#ifndef VEC_TYPES_H\n")
        f.write("#define VEC_TYPES_H\n\n")

        # ==================================================================== #
        # define uint
        # ==================================================================== #

        f.write("typedef unsigned int uint;\n\n")

        # ==================================================================== #
        # define vector types
        # ==================================================================== #

        for v_type in v_types:
            for i in range(2, 5):
                f.write("typedef union {\n")

                for j in range(len(v_element_names)):
                    f.write(f"  struct {{\n")
                    for k in range(i):
                        f.write(f"    {v_type[1]} {v_element_names[j][k]};\n")
                    f.write(f"  }};\n")

                f.write(f"}} {v_type[0]}{i};\n\n")

        f.write("#endif\n\n")

        f.write("#ifdef VEC_TYPES_IMPLEMENTATION\n\n")
        f.write("#include <math.h>\n\n")

        # ==================================================================== #
        # define vector functions
        # ==================================================================== #

        for v_type in v_types:
            for i in range(2, 5):
                et = v_type[1]
                vt = f"{v_type[0]}{i}"

                # ============================================================ #
                # vector operations
                # ============================================================ #

                f.write(f"{vt} {vt}_neg({vt} a) {{\n  {vt} res;\n")
                for j in range(i):
                    f.write(f"  res._{j} = -a._{j};\n")
                f.write(f"  return res;\n}}\n\n")

                f.write(f"{vt} {vt}_inv({vt} a) {{\n  {vt} res;\n")
                for j in range(i):
                    f.write(f"  res._{j} = 1 / a._{j};\n")
                f.write(f"  return res;\n}}\n\n")

                f.write(f"{et} {vt}_length({vt} a) {{\n  {et} res = 0;\n")
                for j in range(i):
                    f.write(f"  res += a._{j} * a._{j};\n")
                f.write(f"  return sqrt(res);\n}}\n\n")

                f.write(f"{vt} {vt}_normalize({vt} a) {{\n")
                f.write(f"  return {vt}_mul_s(a, 1 / {vt}_length(a));\n}}\n\n")

                # ============================================================ #
                # vector-scalar operations
                # ============================================================ #

                f.write(f"{vt} {vt}_add_s({vt} a, {et} b) {{\n  {vt} res;\n")
                for j in range(i):
                    f.write(f"  res._{j} = a._{j} + b;\n")
                f.write(f"  return res;\n}}\n\n")

                f.write(f"{vt} {vt}_sub_s({vt} a, {et} b) {{\n  {vt} res;\n")
                for j in range(i):
                    f.write(f"  res._{j} = a._{j} - b;\n")
                f.write(f"  return res;\n}}\n\n")

                f.write(f"{vt} {vt}_mul_s({vt} a, {et} b) {{\n  {vt} res;\n")
                for j in range(i):
                    f.write(f"  res._{j} = a._{j} * b;\n")
                f.write(f"  return res;\n}}\n\n")

                f.write(f"{vt} {vt}_div_s({vt} a, {et} b) {{\n  {vt} res;\n")
                for j in range(i):
                    f.write(f"  res._{j} = a._{j} / b;\n")
                f.write(f"  return res;\n}}\n\n")

                # ============================================================ #
                # vector-vector operations
                # ============================================================ #

                f.write(f"{vt} {vt}_add({vt} a, {vt} b) {{\n  {vt} res;\n")
                for j in range(i):
                    f.write(f"  res._{j} = a._{j} + b._{j};\n")
                f.write(f"  return res;\n}}\n\n")

                f.write(f"{vt} {vt}_sub({vt} a, {vt} b) {{\n  {vt} res;\n")
                for j in range(i):
                    f.write(f"  res._{j} = a._{j} - b._{j};\n")
                f.write(f"  return res;\n}}\n\n")

                f.write(f"{vt} {vt}_mul({vt} a, {vt} b) {{\n  {vt} res;\n")
                for j in range(i):
                    f.write(f"  res._{j} = a._{j} * b._{j};\n")
                f.write(f"  return res;\n}}\n\n")

                f.write(f"{vt} {vt}_div({vt} a, {vt} b) {{\n  {vt} res;\n")
                for j in range(i):
                    f.write(f"  res._{j} = a._{j} / b._{j};\n")
                f.write(f"  return res;\n}}\n\n")

                f.write(f"{et} {vt}_dot({vt} a, {vt} b) {{\n  {et} res = 0;\n")
                for j in range(i):
                    f.write(f"  res += a._{j} * b._{j};\n")
                f.write(f"  return res;\n}}\n\n")

        f.write("#endif\n")
