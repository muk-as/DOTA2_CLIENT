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
        class CInfoPlayerStart : public source2sdk::server::CPointEntity
        {
        public:
            bool m_bDisabled; // 0x_            
            bool m_bIsMaster; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CGlobalSymbol m_pPawnSubclass; // 0x_            
            
            // Datamap fields:
            // void InputEnable; // 0x_
            // void InputDisable; // 0x_
            // void InputToggle; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoPlayerStart because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoPlayerStart) == 0x_);
    };
};
