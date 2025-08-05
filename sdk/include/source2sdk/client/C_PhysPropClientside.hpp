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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xb90
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_PhysPropClientside : public source2sdk::client::C_BreakableProp
        {
        public:
            source2sdk::entity2::GameTime_t m_flTouchDelta; // 0xb60            
            source2sdk::entity2::GameTime_t m_fDeathTime; // 0xb64            
            Vector m_vecDamagePosition; // 0xb68            
            Vector m_vecDamageDirection; // 0xb74            
            source2sdk::client::DamageTypes_t m_nDamageType; // 0xb80            
            uint8_t _pad0b84[0xc];
            
            // Datamap fields:
            // float m_impactEnergyScale; // 0xad0
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
        
        static_assert(sizeof(source2sdk::client::C_PhysPropClientside) == 0xb90);
    };
};
