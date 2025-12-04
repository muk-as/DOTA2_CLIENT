#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        class CEnvGlobal : public source2sdk::server::CLogicalEntity
        {
        public:
            // m_outCounter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<std::int32_t> m_outCounter;
            char m_outCounter[0x_]; // 0x_            
            CUtlSymbolLarge m_globalstate; // 0x_            
            std::int32_t m_triggermode; // 0x_            
            std::int32_t m_initialstate; // 0x_            
            std::int32_t m_counter; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputTurnOn; // 0x_
            // void InputTurnOff; // 0x_
            // void InputRemove; // 0x_
            // void InputToggle; // 0x_
            // int32_t InputSetCounter; // 0x_
            // int32_t InputAddToCounter; // 0x_
            // void InputGetCounter; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvGlobal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvGlobal) == 0x_);
    };
};
