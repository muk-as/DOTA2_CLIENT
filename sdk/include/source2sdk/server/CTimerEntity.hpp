#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTimerEntity : public source2sdk::server::CLogicalEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnTimer; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnTimerHigh; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnTimerLow; // 0x_            
            std::int32_t m_iDisabled; // 0x_            
            float m_flInitialDelay; // 0x_            
            float m_flRefireTime; // 0x_            
            bool m_bUpDownState; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iUseRandomTime; // 0x_            
            bool m_bPauseAfterFiring; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flLowerRandomBound; // 0x_            
            float m_flUpperRandomBound; // 0x_            
            float m_flRemainingTime; // 0x_            
            bool m_bPaused; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // float InputRefireTime; // 0x_
            // void InputFireTimer; // 0x_
            // void InputEnable; // 0x_
            // void InputDisable; // 0x_
            // void InputToggle; // 0x_
            // float InputAddToTimer; // 0x_
            // void InputResetTimer; // 0x_
            // float InputSubtractFromTimer; // 0x_
            // void InputPauseTimer; // 0x_
            // void InputUnpauseTimer; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTimerEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTimerEntity) == 0x_);
    };
};
