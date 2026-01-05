#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        struct CollisionDetailLayerInfo_t_Name_t
        {
        public:
            CUtlStringToken m_nNameToken; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_sNameString; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::CollisionDetailLayerInfo_t_Name_t, m_nNameToken) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CollisionDetailLayerInfo_t_Name_t, m_sNameString) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::CollisionDetailLayerInfo_t_Name_t) == 0x_);
    };
};
