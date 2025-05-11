#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace physicslib
    {
        struct FeVertexMapBuild_t;
    };
};

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x18
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CFeVertexMapBuildArray
        {
        public:
            // m_Array has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeVertexMapBuild_t*> m_Array;
            char m_Array[0x18]; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::CFeVertexMapBuildArray, m_Array) == 0x0);
        
        static_assert(sizeof(source2sdk::physicslib::CFeVertexMapBuildArray) == 0x18);
    };
};
