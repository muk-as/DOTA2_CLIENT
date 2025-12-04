#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"

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
        class CEnvInstructorHint : public source2sdk::server::CPointEntity
        {
        public:
            CUtlSymbolLarge m_iszName; // 0x_            
            CUtlSymbolLarge m_iszReplace_Key; // 0x_            
            CUtlSymbolLarge m_iszHintTargetEntity; // 0x_            
            std::int32_t m_iTimeout; // 0x_            
            std::int32_t m_iDisplayLimit; // 0x_            
            CUtlSymbolLarge m_iszIcon_Onscreen; // 0x_            
            CUtlSymbolLarge m_iszIcon_Offscreen; // 0x_            
            CUtlSymbolLarge m_iszCaption; // 0x_            
            CUtlSymbolLarge m_iszActivatorCaption; // 0x_            
            Color m_Color; // 0x_            
            float m_fIconOffset; // 0x_            
            float m_fRange; // 0x_            
            std::uint8_t m_iPulseOption; // 0x_            
            std::uint8_t m_iAlphaOption; // 0x_            
            std::uint8_t m_iShakeOption; // 0x_            
            bool m_bStatic; // 0x_            
            bool m_bNoOffscreen; // 0x_            
            bool m_bForceCaption; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iInstanceType; // 0x_            
            bool m_bSuppressRest; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszBinding; // 0x_            
            bool m_bAllowNoDrawTarget; // 0x_            
            bool m_bAutoStart; // 0x_            
            bool m_bLocalPlayerOnly; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // CUtlSymbolLarge InputShowHint; // 0x_
            // void InputEndHint; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvInstructorHint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvInstructorHint) == 0x_);
    };
};
