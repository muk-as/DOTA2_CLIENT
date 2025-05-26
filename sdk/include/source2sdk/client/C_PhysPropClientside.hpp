#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BreakableProp.hpp"
#include "source2sdk/client/DamageTypes_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xb70
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_PhysPropClientside : public source2sdk::client::C_BreakableProp
        {
        public:
            source2sdk::entity2::GameTime_t m_flTouchDelta; // 0xb48            
            source2sdk::entity2::GameTime_t m_fDeathTime; // 0xb4c            
            Vector m_vecDamagePosition; // 0xb50            
            Vector m_vecDamageDirection; // 0xb5c            
            source2sdk::client::DamageTypes_t m_nDamageType; // 0xb68            
            uint8_t _pad0b6c[0x4];
            
            // Datamap fields:
            // float m_impactEnergyScale; // 0xab8
            // bool forcemotiondisabled; // 0x7fffffff
            // bool phys_start_asleep; // 0x7fffffff
            // float fademaxdist; // 0x7fffffff
            // float fademindist; // 0x7fffffff
            // float fadescale; // 0x7fffffff
            // float scale; // 0x7fffffff
            // const char * skin; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PhysPropClientside because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PhysPropClientside) == 0xb70);
    };
};
