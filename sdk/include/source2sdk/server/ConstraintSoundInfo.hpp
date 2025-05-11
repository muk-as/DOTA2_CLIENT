#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/SimpleConstraintSoundProfile.hpp"
#include "source2sdk/server/VelocitySampler.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x88
        // Has VTable
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class ConstraintSoundInfo
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::server::VelocitySampler m_vSampler; // 0x8            
            uint8_t _pad001c[0x4]; // 0x1c
            source2sdk::server::SimpleConstraintSoundProfile m_soundProfile; // 0x20            
            Vector m_forwardAxis; // 0x40            
            uint8_t _pad004c[0x4]; // 0x4c
            CUtlSymbolLarge m_iszTravelSoundFwd; // 0x50            
            CUtlSymbolLarge m_iszTravelSoundBack; // 0x58            
            uint8_t _pad0060[0x8]; // 0x60
            CUtlSymbolLarge m_iszReversalSounds[3]; // 0x68            
            bool m_bPlayTravelSound; // 0x80            
            bool m_bPlayReversalSound; // 0x81            
            uint8_t _pad0082[0x6];
            
            // Datamap fields:
            // CUtlSymbolLarge m_iszReversalSounds[0]; // 0x68
            // CUtlSymbolLarge m_iszReversalSounds[1]; // 0x70
            // CUtlSymbolLarge m_iszReversalSounds[2]; // 0x78
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::ConstraintSoundInfo, m_vSampler) == 0x8);
        static_assert(offsetof(source2sdk::server::ConstraintSoundInfo, m_soundProfile) == 0x20);
        static_assert(offsetof(source2sdk::server::ConstraintSoundInfo, m_forwardAxis) == 0x40);
        static_assert(offsetof(source2sdk::server::ConstraintSoundInfo, m_iszTravelSoundFwd) == 0x50);
        static_assert(offsetof(source2sdk::server::ConstraintSoundInfo, m_iszTravelSoundBack) == 0x58);
        static_assert(offsetof(source2sdk::server::ConstraintSoundInfo, m_iszReversalSounds) == 0x68);
        static_assert(offsetof(source2sdk::server::ConstraintSoundInfo, m_bPlayTravelSound) == 0x80);
        static_assert(offsetof(source2sdk::server::ConstraintSoundInfo, m_bPlayReversalSound) == 0x81);
        
        static_assert(sizeof(source2sdk::server::ConstraintSoundInfo) == 0x88);
    };
};
