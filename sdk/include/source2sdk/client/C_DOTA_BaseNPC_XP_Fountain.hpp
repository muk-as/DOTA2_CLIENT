#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Building.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1ac0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_BaseNPC_XP_Fountain : public source2sdk::client::C_DOTA_BaseNPC_Building
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFxRing; // 0x1ab0            
            bool m_bActive; // 0x1ab4            
            bool m_bIsBeingGranted; // 0x1ab5            
            bool m_bWasBeingGranted; // 0x1ab6            
            uint8_t _pad1ab7[0x1]; // 0x1ab7
            std::int32_t m_nIntervals; // 0x1ab8            
            uint8_t _pad1abc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_BaseNPC_XP_Fountain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC_XP_Fountain) == 0x1ac0);
    };
};
