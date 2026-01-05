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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_PhysPropClientside : public source2sdk::client::C_BreakableProp
        {
        public:
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flTouchDelta; // 0x_            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_fDeathTime; // 0x_            
            // metadata: MNotSaved
            Vector m_vecDamagePosition; // 0x_            
            // metadata: MNotSaved
            Vector m_vecDamageDirection; // 0x_            
            // metadata: MNotSaved
            source2sdk::client::DamageTypes_t m_nDamageType; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // float m_impactEnergyScale; // 0x_
            // bool forcemotiondisabled; // 0x_
            // bool phys_start_asleep; // 0x_
            // float fademaxdist; // 0x_
            // float fademindist; // 0x_
            // float fadescale; // 0x_
            // float scale; // 0x_
            // const char * skin; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PhysPropClientside because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PhysPropClientside) == 0x_);
    };
};
