#ifndef VEC_TYPES_H
#define VEC_TYPES_H

typedef unsigned int uint;

typedef union {
  struct {
    float x;
    float y;
  };
  struct {
    float r;
    float g;
  };
  struct {
    float _0;
    float _1;
  };
} vec2;

typedef union {
  struct {
    float x;
    float y;
    float z;
  };
  struct {
    float r;
    float g;
    float b;
  };
  struct {
    float _0;
    float _1;
    float _2;
    float _padding;
  };
} vec3;

typedef union {
  struct {
    float x;
    float y;
    float z;
    float w;
  };
  struct {
    float r;
    float g;
    float b;
    float a;
  };
  struct {
    float _0;
    float _1;
    float _2;
    float _3;
  };
} vec4;

typedef union {
  struct {
    float x;
    float y;
  };
  struct {
    float r;
    float g;
  };
  struct {
    float _0;
    float _1;
  };
} ivec2;

typedef union {
  struct {
    float x;
    float y;
    float z;
  };
  struct {
    float r;
    float g;
    float b;
  };
  struct {
    float _0;
    float _1;
    float _2;
    float _padding;
  };
} ivec3;

typedef union {
  struct {
    float x;
    float y;
    float z;
    float w;
  };
  struct {
    float r;
    float g;
    float b;
    float a;
  };
  struct {
    float _0;
    float _1;
    float _2;
    float _3;
  };
} ivec4;

typedef union {
  struct {
    uint x;
    uint y;
  };
  struct {
    uint r;
    uint g;
  };
  struct {
    uint _0;
    uint _1;
  };
} uvec2;

typedef union {
  struct {
    uint x;
    uint y;
    uint z;
  };
  struct {
    uint r;
    uint g;
    uint b;
  };
  struct {
    uint _0;
    uint _1;
    uint _2;
    uint _padding;
  };
} uvec3;

typedef union {
  struct {
    uint x;
    uint y;
    uint z;
    uint w;
  };
  struct {
    uint r;
    uint g;
    uint b;
    uint a;
  };
  struct {
    uint _0;
    uint _1;
    uint _2;
    uint _3;
  };
} uvec4;

#endif

#ifdef VEC_TYPES_IMPLEMENTATION

#include <math.h>

vec2 vec2_neg(vec2 a) {
  vec2 res;
  res._0 = -a._0;
  res._1 = -a._1;
  return res;
}

vec2 vec2_inv(vec2 a) {
  vec2 res;
  res._0 = 1 / a._0;
  res._1 = 1 / a._1;
  return res;
}

float vec2_length(vec2 a) {
  float res = 0;
  res += a._0 * a._0;
  res += a._1 * a._1;
  return sqrt(res);
}

vec2 vec2_normalize(vec2 a) {
  return vec2_mul_s(a, 1 / vec2_length(a));
}

vec2 vec2_add_s(vec2 a, float b) {
  vec2 res;
  res._0 = a._0 + b;
  res._1 = a._1 + b;
  return res;
}

vec2 vec2_sub_s(vec2 a, float b) {
  vec2 res;
  res._0 = a._0 - b;
  res._1 = a._1 - b;
  return res;
}

vec2 vec2_mul_s(vec2 a, float b) {
  vec2 res;
  res._0 = a._0 * b;
  res._1 = a._1 * b;
  return res;
}

vec2 vec2_div_s(vec2 a, float b) {
  vec2 res;
  res._0 = a._0 / b;
  res._1 = a._1 / b;
  return res;
}

vec2 vec2_add(vec2 a, vec2 b) {
  vec2 res;
  res._0 = a._0 + b._0;
  res._1 = a._1 + b._1;
  return res;
}

vec2 vec2_sub(vec2 a, vec2 b) {
  vec2 res;
  res._0 = a._0 - b._0;
  res._1 = a._1 - b._1;
  return res;
}

vec2 vec2_mul(vec2 a, vec2 b) {
  vec2 res;
  res._0 = a._0 * b._0;
  res._1 = a._1 * b._1;
  return res;
}

vec2 vec2_div(vec2 a, vec2 b) {
  vec2 res;
  res._0 = a._0 / b._0;
  res._1 = a._1 / b._1;
  return res;
}

float vec2_dot(vec2 a, vec2 b) {
  float res = 0;
  res += a._0 * b._0;
  res += a._1 * b._1;
  return res;
}

vec3 vec3_neg(vec3 a) {
  vec3 res;
  res._0 = -a._0;
  res._1 = -a._1;
  res._2 = -a._2;
  return res;
}

vec3 vec3_inv(vec3 a) {
  vec3 res;
  res._0 = 1 / a._0;
  res._1 = 1 / a._1;
  res._2 = 1 / a._2;
  return res;
}

float vec3_length(vec3 a) {
  float res = 0;
  res += a._0 * a._0;
  res += a._1 * a._1;
  res += a._2 * a._2;
  return sqrt(res);
}

vec3 vec3_normalize(vec3 a) {
  return vec3_mul_s(a, 1 / vec3_length(a));
}

vec3 vec3_add_s(vec3 a, float b) {
  vec3 res;
  res._0 = a._0 + b;
  res._1 = a._1 + b;
  res._2 = a._2 + b;
  return res;
}

vec3 vec3_sub_s(vec3 a, float b) {
  vec3 res;
  res._0 = a._0 - b;
  res._1 = a._1 - b;
  res._2 = a._2 - b;
  return res;
}

vec3 vec3_mul_s(vec3 a, float b) {
  vec3 res;
  res._0 = a._0 * b;
  res._1 = a._1 * b;
  res._2 = a._2 * b;
  return res;
}

vec3 vec3_div_s(vec3 a, float b) {
  vec3 res;
  res._0 = a._0 / b;
  res._1 = a._1 / b;
  res._2 = a._2 / b;
  return res;
}

vec3 vec3_add(vec3 a, vec3 b) {
  vec3 res;
  res._0 = a._0 + b._0;
  res._1 = a._1 + b._1;
  res._2 = a._2 + b._2;
  return res;
}

vec3 vec3_sub(vec3 a, vec3 b) {
  vec3 res;
  res._0 = a._0 - b._0;
  res._1 = a._1 - b._1;
  res._2 = a._2 - b._2;
  return res;
}

vec3 vec3_mul(vec3 a, vec3 b) {
  vec3 res;
  res._0 = a._0 * b._0;
  res._1 = a._1 * b._1;
  res._2 = a._2 * b._2;
  return res;
}

vec3 vec3_div(vec3 a, vec3 b) {
  vec3 res;
  res._0 = a._0 / b._0;
  res._1 = a._1 / b._1;
  res._2 = a._2 / b._2;
  return res;
}

float vec3_dot(vec3 a, vec3 b) {
  float res = 0;
  res += a._0 * b._0;
  res += a._1 * b._1;
  res += a._2 * b._2;
  return res;
}

vec4 vec4_neg(vec4 a) {
  vec4 res;
  res._0 = -a._0;
  res._1 = -a._1;
  res._2 = -a._2;
  res._3 = -a._3;
  return res;
}

vec4 vec4_inv(vec4 a) {
  vec4 res;
  res._0 = 1 / a._0;
  res._1 = 1 / a._1;
  res._2 = 1 / a._2;
  res._3 = 1 / a._3;
  return res;
}

float vec4_length(vec4 a) {
  float res = 0;
  res += a._0 * a._0;
  res += a._1 * a._1;
  res += a._2 * a._2;
  res += a._3 * a._3;
  return sqrt(res);
}

vec4 vec4_normalize(vec4 a) {
  return vec4_mul_s(a, 1 / vec4_length(a));
}

vec4 vec4_add_s(vec4 a, float b) {
  vec4 res;
  res._0 = a._0 + b;
  res._1 = a._1 + b;
  res._2 = a._2 + b;
  res._3 = a._3 + b;
  return res;
}

vec4 vec4_sub_s(vec4 a, float b) {
  vec4 res;
  res._0 = a._0 - b;
  res._1 = a._1 - b;
  res._2 = a._2 - b;
  res._3 = a._3 - b;
  return res;
}

vec4 vec4_mul_s(vec4 a, float b) {
  vec4 res;
  res._0 = a._0 * b;
  res._1 = a._1 * b;
  res._2 = a._2 * b;
  res._3 = a._3 * b;
  return res;
}

vec4 vec4_div_s(vec4 a, float b) {
  vec4 res;
  res._0 = a._0 / b;
  res._1 = a._1 / b;
  res._2 = a._2 / b;
  res._3 = a._3 / b;
  return res;
}

vec4 vec4_add(vec4 a, vec4 b) {
  vec4 res;
  res._0 = a._0 + b._0;
  res._1 = a._1 + b._1;
  res._2 = a._2 + b._2;
  res._3 = a._3 + b._3;
  return res;
}

vec4 vec4_sub(vec4 a, vec4 b) {
  vec4 res;
  res._0 = a._0 - b._0;
  res._1 = a._1 - b._1;
  res._2 = a._2 - b._2;
  res._3 = a._3 - b._3;
  return res;
}

vec4 vec4_mul(vec4 a, vec4 b) {
  vec4 res;
  res._0 = a._0 * b._0;
  res._1 = a._1 * b._1;
  res._2 = a._2 * b._2;
  res._3 = a._3 * b._3;
  return res;
}

vec4 vec4_div(vec4 a, vec4 b) {
  vec4 res;
  res._0 = a._0 / b._0;
  res._1 = a._1 / b._1;
  res._2 = a._2 / b._2;
  res._3 = a._3 / b._3;
  return res;
}

float vec4_dot(vec4 a, vec4 b) {
  float res = 0;
  res += a._0 * b._0;
  res += a._1 * b._1;
  res += a._2 * b._2;
  res += a._3 * b._3;
  return res;
}

ivec2 ivec2_neg(ivec2 a) {
  ivec2 res;
  res._0 = -a._0;
  res._1 = -a._1;
  return res;
}

ivec2 ivec2_inv(ivec2 a) {
  ivec2 res;
  res._0 = 1 / a._0;
  res._1 = 1 / a._1;
  return res;
}

float ivec2_length(ivec2 a) {
  float res = 0;
  res += a._0 * a._0;
  res += a._1 * a._1;
  return sqrt(res);
}

ivec2 ivec2_normalize(ivec2 a) {
  return ivec2_mul_s(a, 1 / ivec2_length(a));
}

ivec2 ivec2_add_s(ivec2 a, float b) {
  ivec2 res;
  res._0 = a._0 + b;
  res._1 = a._1 + b;
  return res;
}

ivec2 ivec2_sub_s(ivec2 a, float b) {
  ivec2 res;
  res._0 = a._0 - b;
  res._1 = a._1 - b;
  return res;
}

ivec2 ivec2_mul_s(ivec2 a, float b) {
  ivec2 res;
  res._0 = a._0 * b;
  res._1 = a._1 * b;
  return res;
}

ivec2 ivec2_div_s(ivec2 a, float b) {
  ivec2 res;
  res._0 = a._0 / b;
  res._1 = a._1 / b;
  return res;
}

ivec2 ivec2_add(ivec2 a, ivec2 b) {
  ivec2 res;
  res._0 = a._0 + b._0;
  res._1 = a._1 + b._1;
  return res;
}

ivec2 ivec2_sub(ivec2 a, ivec2 b) {
  ivec2 res;
  res._0 = a._0 - b._0;
  res._1 = a._1 - b._1;
  return res;
}

ivec2 ivec2_mul(ivec2 a, ivec2 b) {
  ivec2 res;
  res._0 = a._0 * b._0;
  res._1 = a._1 * b._1;
  return res;
}

ivec2 ivec2_div(ivec2 a, ivec2 b) {
  ivec2 res;
  res._0 = a._0 / b._0;
  res._1 = a._1 / b._1;
  return res;
}

float ivec2_dot(ivec2 a, ivec2 b) {
  float res = 0;
  res += a._0 * b._0;
  res += a._1 * b._1;
  return res;
}

ivec3 ivec3_neg(ivec3 a) {
  ivec3 res;
  res._0 = -a._0;
  res._1 = -a._1;
  res._2 = -a._2;
  return res;
}

ivec3 ivec3_inv(ivec3 a) {
  ivec3 res;
  res._0 = 1 / a._0;
  res._1 = 1 / a._1;
  res._2 = 1 / a._2;
  return res;
}

float ivec3_length(ivec3 a) {
  float res = 0;
  res += a._0 * a._0;
  res += a._1 * a._1;
  res += a._2 * a._2;
  return sqrt(res);
}

ivec3 ivec3_normalize(ivec3 a) {
  return ivec3_mul_s(a, 1 / ivec3_length(a));
}

ivec3 ivec3_add_s(ivec3 a, float b) {
  ivec3 res;
  res._0 = a._0 + b;
  res._1 = a._1 + b;
  res._2 = a._2 + b;
  return res;
}

ivec3 ivec3_sub_s(ivec3 a, float b) {
  ivec3 res;
  res._0 = a._0 - b;
  res._1 = a._1 - b;
  res._2 = a._2 - b;
  return res;
}

ivec3 ivec3_mul_s(ivec3 a, float b) {
  ivec3 res;
  res._0 = a._0 * b;
  res._1 = a._1 * b;
  res._2 = a._2 * b;
  return res;
}

ivec3 ivec3_div_s(ivec3 a, float b) {
  ivec3 res;
  res._0 = a._0 / b;
  res._1 = a._1 / b;
  res._2 = a._2 / b;
  return res;
}

ivec3 ivec3_add(ivec3 a, ivec3 b) {
  ivec3 res;
  res._0 = a._0 + b._0;
  res._1 = a._1 + b._1;
  res._2 = a._2 + b._2;
  return res;
}

ivec3 ivec3_sub(ivec3 a, ivec3 b) {
  ivec3 res;
  res._0 = a._0 - b._0;
  res._1 = a._1 - b._1;
  res._2 = a._2 - b._2;
  return res;
}

ivec3 ivec3_mul(ivec3 a, ivec3 b) {
  ivec3 res;
  res._0 = a._0 * b._0;
  res._1 = a._1 * b._1;
  res._2 = a._2 * b._2;
  return res;
}

ivec3 ivec3_div(ivec3 a, ivec3 b) {
  ivec3 res;
  res._0 = a._0 / b._0;
  res._1 = a._1 / b._1;
  res._2 = a._2 / b._2;
  return res;
}

float ivec3_dot(ivec3 a, ivec3 b) {
  float res = 0;
  res += a._0 * b._0;
  res += a._1 * b._1;
  res += a._2 * b._2;
  return res;
}

ivec4 ivec4_neg(ivec4 a) {
  ivec4 res;
  res._0 = -a._0;
  res._1 = -a._1;
  res._2 = -a._2;
  res._3 = -a._3;
  return res;
}

ivec4 ivec4_inv(ivec4 a) {
  ivec4 res;
  res._0 = 1 / a._0;
  res._1 = 1 / a._1;
  res._2 = 1 / a._2;
  res._3 = 1 / a._3;
  return res;
}

float ivec4_length(ivec4 a) {
  float res = 0;
  res += a._0 * a._0;
  res += a._1 * a._1;
  res += a._2 * a._2;
  res += a._3 * a._3;
  return sqrt(res);
}

ivec4 ivec4_normalize(ivec4 a) {
  return ivec4_mul_s(a, 1 / ivec4_length(a));
}

ivec4 ivec4_add_s(ivec4 a, float b) {
  ivec4 res;
  res._0 = a._0 + b;
  res._1 = a._1 + b;
  res._2 = a._2 + b;
  res._3 = a._3 + b;
  return res;
}

ivec4 ivec4_sub_s(ivec4 a, float b) {
  ivec4 res;
  res._0 = a._0 - b;
  res._1 = a._1 - b;
  res._2 = a._2 - b;
  res._3 = a._3 - b;
  return res;
}

ivec4 ivec4_mul_s(ivec4 a, float b) {
  ivec4 res;
  res._0 = a._0 * b;
  res._1 = a._1 * b;
  res._2 = a._2 * b;
  res._3 = a._3 * b;
  return res;
}

ivec4 ivec4_div_s(ivec4 a, float b) {
  ivec4 res;
  res._0 = a._0 / b;
  res._1 = a._1 / b;
  res._2 = a._2 / b;
  res._3 = a._3 / b;
  return res;
}

ivec4 ivec4_add(ivec4 a, ivec4 b) {
  ivec4 res;
  res._0 = a._0 + b._0;
  res._1 = a._1 + b._1;
  res._2 = a._2 + b._2;
  res._3 = a._3 + b._3;
  return res;
}

ivec4 ivec4_sub(ivec4 a, ivec4 b) {
  ivec4 res;
  res._0 = a._0 - b._0;
  res._1 = a._1 - b._1;
  res._2 = a._2 - b._2;
  res._3 = a._3 - b._3;
  return res;
}

ivec4 ivec4_mul(ivec4 a, ivec4 b) {
  ivec4 res;
  res._0 = a._0 * b._0;
  res._1 = a._1 * b._1;
  res._2 = a._2 * b._2;
  res._3 = a._3 * b._3;
  return res;
}

ivec4 ivec4_div(ivec4 a, ivec4 b) {
  ivec4 res;
  res._0 = a._0 / b._0;
  res._1 = a._1 / b._1;
  res._2 = a._2 / b._2;
  res._3 = a._3 / b._3;
  return res;
}

float ivec4_dot(ivec4 a, ivec4 b) {
  float res = 0;
  res += a._0 * b._0;
  res += a._1 * b._1;
  res += a._2 * b._2;
  res += a._3 * b._3;
  return res;
}

uvec2 uvec2_neg(uvec2 a) {
  uvec2 res;
  res._0 = -a._0;
  res._1 = -a._1;
  return res;
}

uvec2 uvec2_inv(uvec2 a) {
  uvec2 res;
  res._0 = 1 / a._0;
  res._1 = 1 / a._1;
  return res;
}

uint uvec2_length(uvec2 a) {
  uint res = 0;
  res += a._0 * a._0;
  res += a._1 * a._1;
  return sqrt(res);
}

uvec2 uvec2_normalize(uvec2 a) {
  return uvec2_mul_s(a, 1 / uvec2_length(a));
}

uvec2 uvec2_add_s(uvec2 a, uint b) {
  uvec2 res;
  res._0 = a._0 + b;
  res._1 = a._1 + b;
  return res;
}

uvec2 uvec2_sub_s(uvec2 a, uint b) {
  uvec2 res;
  res._0 = a._0 - b;
  res._1 = a._1 - b;
  return res;
}

uvec2 uvec2_mul_s(uvec2 a, uint b) {
  uvec2 res;
  res._0 = a._0 * b;
  res._1 = a._1 * b;
  return res;
}

uvec2 uvec2_div_s(uvec2 a, uint b) {
  uvec2 res;
  res._0 = a._0 / b;
  res._1 = a._1 / b;
  return res;
}

uvec2 uvec2_add(uvec2 a, uvec2 b) {
  uvec2 res;
  res._0 = a._0 + b._0;
  res._1 = a._1 + b._1;
  return res;
}

uvec2 uvec2_sub(uvec2 a, uvec2 b) {
  uvec2 res;
  res._0 = a._0 - b._0;
  res._1 = a._1 - b._1;
  return res;
}

uvec2 uvec2_mul(uvec2 a, uvec2 b) {
  uvec2 res;
  res._0 = a._0 * b._0;
  res._1 = a._1 * b._1;
  return res;
}

uvec2 uvec2_div(uvec2 a, uvec2 b) {
  uvec2 res;
  res._0 = a._0 / b._0;
  res._1 = a._1 / b._1;
  return res;
}

uint uvec2_dot(uvec2 a, uvec2 b) {
  uint res = 0;
  res += a._0 * b._0;
  res += a._1 * b._1;
  return res;
}

uvec3 uvec3_neg(uvec3 a) {
  uvec3 res;
  res._0 = -a._0;
  res._1 = -a._1;
  res._2 = -a._2;
  return res;
}

uvec3 uvec3_inv(uvec3 a) {
  uvec3 res;
  res._0 = 1 / a._0;
  res._1 = 1 / a._1;
  res._2 = 1 / a._2;
  return res;
}

uint uvec3_length(uvec3 a) {
  uint res = 0;
  res += a._0 * a._0;
  res += a._1 * a._1;
  res += a._2 * a._2;
  return sqrt(res);
}

uvec3 uvec3_normalize(uvec3 a) {
  return uvec3_mul_s(a, 1 / uvec3_length(a));
}

uvec3 uvec3_add_s(uvec3 a, uint b) {
  uvec3 res;
  res._0 = a._0 + b;
  res._1 = a._1 + b;
  res._2 = a._2 + b;
  return res;
}

uvec3 uvec3_sub_s(uvec3 a, uint b) {
  uvec3 res;
  res._0 = a._0 - b;
  res._1 = a._1 - b;
  res._2 = a._2 - b;
  return res;
}

uvec3 uvec3_mul_s(uvec3 a, uint b) {
  uvec3 res;
  res._0 = a._0 * b;
  res._1 = a._1 * b;
  res._2 = a._2 * b;
  return res;
}

uvec3 uvec3_div_s(uvec3 a, uint b) {
  uvec3 res;
  res._0 = a._0 / b;
  res._1 = a._1 / b;
  res._2 = a._2 / b;
  return res;
}

uvec3 uvec3_add(uvec3 a, uvec3 b) {
  uvec3 res;
  res._0 = a._0 + b._0;
  res._1 = a._1 + b._1;
  res._2 = a._2 + b._2;
  return res;
}

uvec3 uvec3_sub(uvec3 a, uvec3 b) {
  uvec3 res;
  res._0 = a._0 - b._0;
  res._1 = a._1 - b._1;
  res._2 = a._2 - b._2;
  return res;
}

uvec3 uvec3_mul(uvec3 a, uvec3 b) {
  uvec3 res;
  res._0 = a._0 * b._0;
  res._1 = a._1 * b._1;
  res._2 = a._2 * b._2;
  return res;
}

uvec3 uvec3_div(uvec3 a, uvec3 b) {
  uvec3 res;
  res._0 = a._0 / b._0;
  res._1 = a._1 / b._1;
  res._2 = a._2 / b._2;
  return res;
}

uint uvec3_dot(uvec3 a, uvec3 b) {
  uint res = 0;
  res += a._0 * b._0;
  res += a._1 * b._1;
  res += a._2 * b._2;
  return res;
}

uvec4 uvec4_neg(uvec4 a) {
  uvec4 res;
  res._0 = -a._0;
  res._1 = -a._1;
  res._2 = -a._2;
  res._3 = -a._3;
  return res;
}

uvec4 uvec4_inv(uvec4 a) {
  uvec4 res;
  res._0 = 1 / a._0;
  res._1 = 1 / a._1;
  res._2 = 1 / a._2;
  res._3 = 1 / a._3;
  return res;
}

uint uvec4_length(uvec4 a) {
  uint res = 0;
  res += a._0 * a._0;
  res += a._1 * a._1;
  res += a._2 * a._2;
  res += a._3 * a._3;
  return sqrt(res);
}

uvec4 uvec4_normalize(uvec4 a) {
  return uvec4_mul_s(a, 1 / uvec4_length(a));
}

uvec4 uvec4_add_s(uvec4 a, uint b) {
  uvec4 res;
  res._0 = a._0 + b;
  res._1 = a._1 + b;
  res._2 = a._2 + b;
  res._3 = a._3 + b;
  return res;
}

uvec4 uvec4_sub_s(uvec4 a, uint b) {
  uvec4 res;
  res._0 = a._0 - b;
  res._1 = a._1 - b;
  res._2 = a._2 - b;
  res._3 = a._3 - b;
  return res;
}

uvec4 uvec4_mul_s(uvec4 a, uint b) {
  uvec4 res;
  res._0 = a._0 * b;
  res._1 = a._1 * b;
  res._2 = a._2 * b;
  res._3 = a._3 * b;
  return res;
}

uvec4 uvec4_div_s(uvec4 a, uint b) {
  uvec4 res;
  res._0 = a._0 / b;
  res._1 = a._1 / b;
  res._2 = a._2 / b;
  res._3 = a._3 / b;
  return res;
}

uvec4 uvec4_add(uvec4 a, uvec4 b) {
  uvec4 res;
  res._0 = a._0 + b._0;
  res._1 = a._1 + b._1;
  res._2 = a._2 + b._2;
  res._3 = a._3 + b._3;
  return res;
}

uvec4 uvec4_sub(uvec4 a, uvec4 b) {
  uvec4 res;
  res._0 = a._0 - b._0;
  res._1 = a._1 - b._1;
  res._2 = a._2 - b._2;
  res._3 = a._3 - b._3;
  return res;
}

uvec4 uvec4_mul(uvec4 a, uvec4 b) {
  uvec4 res;
  res._0 = a._0 * b._0;
  res._1 = a._1 * b._1;
  res._2 = a._2 * b._2;
  res._3 = a._3 * b._3;
  return res;
}

uvec4 uvec4_div(uvec4 a, uvec4 b) {
  uvec4 res;
  res._0 = a._0 / b._0;
  res._1 = a._1 / b._1;
  res._2 = a._2 / b._2;
  res._3 = a._3 / b._3;
  return res;
}

uint uvec4_dot(uvec4 a, uvec4 b) {
  uint res = 0;
  res += a._0 * b._0;
  res += a._1 * b._1;
  res += a._2 * b._2;
  res += a._3 * b._3;
  return res;
}

#endif
