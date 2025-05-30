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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x20
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeEffectDesc_t
        {
        public:
            CUtlString sName; // 0x0            
            std::uint32_t nNameHash; // 0x8            
            std::int32_t nType; // 0xc            
            KeyValues3 m_Params; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeEffectDesc_t, sName) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::FeEffectDesc_t, nNameHash) == 0x8);
        static_assert(offsetof(source2sdk::physicslib::FeEffectDesc_t, nType) == 0xc);
        static_assert(offsetof(source2sdk::physicslib::FeEffectDesc_t, m_Params) == 0x10);
        
        static_assert(sizeof(source2sdk::physicslib::FeEffectDesc_t) == 0x20);
    };
};
