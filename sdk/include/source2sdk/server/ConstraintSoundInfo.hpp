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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class ConstraintSoundInfo
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            source2sdk::server::VelocitySampler m_vSampler; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::SimpleConstraintSoundProfile m_soundProfile; // 0x_            
            // metadata: MNotSaved
            Vector m_forwardAxis; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszTravelSoundFwd; // 0x_            
            CUtlSymbolLarge m_iszTravelSoundBack; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszReversalSoundSmall; // 0x_            
            CUtlSymbolLarge m_iszReversalSoundMedium; // 0x_            
            CUtlSymbolLarge m_iszReversalSoundLarge; // 0x_            
            // metadata: MNotSaved
            bool m_bPlayTravelSound; // 0x_            
            // metadata: MNotSaved
            bool m_bPlayReversalSound; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::ConstraintSoundInfo, m_vSampler) == 0x_);
        static_assert(offsetof(source2sdk::server::ConstraintSoundInfo, m_soundProfile) == 0x_);
        static_assert(offsetof(source2sdk::server::ConstraintSoundInfo, m_forwardAxis) == 0x_);
        static_assert(offsetof(source2sdk::server::ConstraintSoundInfo, m_iszTravelSoundFwd) == 0x_);
        static_assert(offsetof(source2sdk::server::ConstraintSoundInfo, m_iszTravelSoundBack) == 0x_);
        static_assert(offsetof(source2sdk::server::ConstraintSoundInfo, m_iszReversalSoundSmall) == 0x_);
        static_assert(offsetof(source2sdk::server::ConstraintSoundInfo, m_iszReversalSoundMedium) == 0x_);
        static_assert(offsetof(source2sdk::server::ConstraintSoundInfo, m_iszReversalSoundLarge) == 0x_);
        static_assert(offsetof(source2sdk::server::ConstraintSoundInfo, m_bPlayTravelSound) == 0x_);
        static_assert(offsetof(source2sdk::server::ConstraintSoundInfo, m_bPlayReversalSound) == 0x_);
        
        static_assert(sizeof(source2sdk::server::ConstraintSoundInfo) == 0x_);
    };
};
