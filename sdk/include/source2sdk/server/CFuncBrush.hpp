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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x810
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncBrush : public source2sdk::server::CBaseModelEntity
        {
        public:
            source2sdk::client::BrushSolidities_e m_iSolidity; // 0x7f0            
            std::int32_t m_iDisabled; // 0x7f4            
            bool m_bSolidBsp; // 0x7f8            
            uint8_t _pad07f9[0x7]; // 0x7f9
            CUtlSymbolLarge m_iszExcludedClass; // 0x800            
            bool m_bInvertExclusion; // 0x808            
            bool m_bScriptedMovement; // 0x809            
            uint8_t _pad080a[0x6];
            
            // Datamap fields:
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // void InputToggle; // 0x0
            // CUtlSymbolLarge InputSetExcluded; // 0x0
            // bool InputSetInvert; // 0x0
            // void InputSetSolid; // 0x0
            // void InputSetNonsolid; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncBrush because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncBrush) == 0x810);
    };
};
