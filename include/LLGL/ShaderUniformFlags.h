/*
 * ShaderUniformFlags.h
 * 
 * This file is part of the "LLGL" project (Copyright (c) 2015-2018 by Lukas Hermanns)
 * See "LICENSE.txt" for license information.
 */

#ifndef LLGL_SHADER_UNIFORM_FLAGS_H
#define LLGL_SHADER_UNIFORM_FLAGS_H


#include <string>
#include <cstdint>


namespace LLGL
{


//! Shader uniform type enumeration.
enum class UniformType
{
    Float,          //!< float uniform.
    Float2,         //!< float2/ vec2 uniform.
    Float3,         //!< float3/ vec3 uniform.
    Float4,         //!< float4/ vec4 uniform.
    Double,         //!< double uniform.
    Double2,        //!< double2/ dvec2 uniform.
    Double3,        //!< double3/ dvec3 uniform.
    Double4,        //!< double4/ dvec4 uniform.
    Int,            //!< int uniform.
    Int2,           //!< int2/ ivec2 uniform.
    Int3,           //!< int3/ ivec3 uniform.
    Int4,           //!< int4/ ivec4 uniform.
    Float2x2,       //!< float2x2/ mat2 uniform.
    Float3x3,       //!< float3x3/ mat3 uniform.
    Float4x4,       //!< float4x4/ mat4 uniform.
    Double2x2,      //!< double2x2/ dmat2 uniform.
    Double3x3,      //!< double3x3/ dmat3 uniform.
    Double4x4,      //!< double4x4/ dmat4 uniform.
    Sampler1D,      //!< sampler1D uniform.
    Sampler2D,      //!< sampler2D uniform.
    Sampler3D,      //!< sampler3D uniform.
    SamplerCube,    //!< samplerCube uniform.
};


//! Shader uniform location type, as zero-based index in 32-bit signed integer format.
using UniformLocation = std::int32_t;

//! Shader uniform descriptor structure.
struct UniformDescriptor
{
    //! Name of the uniform inside the shader.
    std::string     name;

    //! Data type of the uniform.
    UniformType     type        = UniformType::Float;

    //! Internal location of the uniform within a shader program.
    UniformLocation location    = 0;

    //! Array size of the uniform.
    std::uint32_t   size        = 0;
};


} // /namespace LLGL


#endif



// ================================================================================
