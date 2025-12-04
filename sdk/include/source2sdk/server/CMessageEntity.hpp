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
        class CMessageEntity : public source2sdk::server::CPointEntity
        {
        public:
            std::int32_t m_radius; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_messageText; // 0x_            
            bool m_drawText; // 0x_            
            bool m_bDeveloperOnly; // 0x_            
            bool m_bEnabled; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputEnable; // 0x_
            // void InputDisable; // 0x_
            // CUtlSymbolLarge InputSetMessage; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMessageEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMessageEntity) == 0x_);
    };
};
