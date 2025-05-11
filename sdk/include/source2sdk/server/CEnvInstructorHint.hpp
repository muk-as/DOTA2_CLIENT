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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x548
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvInstructorHint : public source2sdk::server::CPointEntity
        {
        public:
            CUtlSymbolLarge m_iszName; // 0x4d8            
            CUtlSymbolLarge m_iszReplace_Key; // 0x4e0            
            CUtlSymbolLarge m_iszHintTargetEntity; // 0x4e8            
            std::int32_t m_iTimeout; // 0x4f0            
            std::int32_t m_iDisplayLimit; // 0x4f4            
            CUtlSymbolLarge m_iszIcon_Onscreen; // 0x4f8            
            CUtlSymbolLarge m_iszIcon_Offscreen; // 0x500            
            CUtlSymbolLarge m_iszCaption; // 0x508            
            CUtlSymbolLarge m_iszActivatorCaption; // 0x510            
            Color m_Color; // 0x518            
            float m_fIconOffset; // 0x51c            
            float m_fRange; // 0x520            
            std::uint8_t m_iPulseOption; // 0x524            
            std::uint8_t m_iAlphaOption; // 0x525            
            std::uint8_t m_iShakeOption; // 0x526            
            bool m_bStatic; // 0x527            
            bool m_bNoOffscreen; // 0x528            
            bool m_bForceCaption; // 0x529            
            uint8_t _pad052a[0x2]; // 0x52a
            std::int32_t m_iInstanceType; // 0x52c            
            bool m_bSuppressRest; // 0x530            
            uint8_t _pad0531[0x7]; // 0x531
            CUtlSymbolLarge m_iszBinding; // 0x538            
            bool m_bAllowNoDrawTarget; // 0x540            
            bool m_bAutoStart; // 0x541            
            bool m_bLocalPlayerOnly; // 0x542            
            uint8_t _pad0543[0x5];
            
            // Datamap fields:
            // CUtlSymbolLarge InputShowHint; // 0x0
            // void InputEndHint; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvInstructorHint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvInstructorHint) == 0x548);
    };
};
