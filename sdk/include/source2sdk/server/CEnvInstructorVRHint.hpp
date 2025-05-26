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
        // Size: 0x520
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvInstructorVRHint : public source2sdk::server::CPointEntity
        {
        public:
            CUtlSymbolLarge m_iszName; // 0x4e0            
            CUtlSymbolLarge m_iszHintTargetEntity; // 0x4e8            
            std::int32_t m_iTimeout; // 0x4f0            
            uint8_t _pad04f4[0x4]; // 0x4f4
            CUtlSymbolLarge m_iszCaption; // 0x4f8            
            CUtlSymbolLarge m_iszStartSound; // 0x500            
            std::int32_t m_iLayoutFileType; // 0x508            
            uint8_t _pad050c[0x4]; // 0x50c
            CUtlSymbolLarge m_iszCustomLayoutFile; // 0x510            
            std::int32_t m_iAttachType; // 0x518            
            float m_flHeightOffset; // 0x51c            
            
            // Datamap fields:
            // CUtlSymbolLarge InputShowHint; // 0x0
            // void InputEndHint; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvInstructorVRHint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvInstructorVRHint) == 0x520);
    };
};
