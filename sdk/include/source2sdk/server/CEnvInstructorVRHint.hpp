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
        class CEnvInstructorVRHint : public source2sdk::server::CPointEntity
        {
        public:
            CUtlSymbolLarge m_iszName; // 0x_            
            CUtlSymbolLarge m_iszHintTargetEntity; // 0x_            
            std::int32_t m_iTimeout; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszCaption; // 0x_            
            CUtlSymbolLarge m_iszStartSound; // 0x_            
            std::int32_t m_iLayoutFileType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszCustomLayoutFile; // 0x_            
            std::int32_t m_iAttachType; // 0x_            
            float m_flHeightOffset; // 0x_            
            
            // Datamap fields:
            // CUtlSymbolLarge InputShowHint; // 0x_
            // void InputEndHint; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvInstructorVRHint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvInstructorVRHint) == 0x_);
    };
};
