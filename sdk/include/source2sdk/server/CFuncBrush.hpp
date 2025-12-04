#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BrushSolidities_e.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        class CFuncBrush : public source2sdk::server::CBaseModelEntity
        {
        public:
            source2sdk::client::BrushSolidities_e m_iSolidity; // 0x_            
            std::int32_t m_iDisabled; // 0x_            
            bool m_bSolidBsp; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszExcludedClass; // 0x_            
            bool m_bInvertExclusion; // 0x_            
            bool m_bScriptedMovement; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputTurnOn; // 0x_
            // void InputTurnOff; // 0x_
            // void InputToggle; // 0x_
            // CUtlSymbolLarge InputSetExcluded; // 0x_
            // bool InputSetInvert; // 0x_
            // void InputSetSolid; // 0x_
            // void InputSetNonsolid; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncBrush because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncBrush) == 0x_);
    };
};
