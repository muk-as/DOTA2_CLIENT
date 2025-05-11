#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EFightingGameActionID.hpp"
#include "source2sdk/client/EFightingGameButtonBit.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x28
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAFightingGameCancelOptionDefinition
        {
        public:
            source2sdk::client::EFightingGameButtonBit m_eCancelInput; // 0x0            
            source2sdk::client::EFightingGameButtonBit m_eCancelInput2; // 0x4            
            source2sdk::client::EFightingGameButtonBit m_eCancelInput3; // 0x8            
            std::int32_t m_nCancelStart; // 0xc            
            std::int32_t m_nCancelDuration; // 0x10            
            std::int32_t m_nCancelInputBuffer; // 0x14            
            bool m_bRequiresInstall; // 0x18            
            bool m_bAllowCancelOnWhiff; // 0x19            
            uint8_t _pad001a[0x2]; // 0x1a
            source2sdk::client::EFightingGameActionID m_nCancelActionID; // 0x1c            
            CUtlString m_strCancelActionName; // 0x20            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameCancelOptionDefinition, m_eCancelInput) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameCancelOptionDefinition, m_eCancelInput2) == 0x4);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameCancelOptionDefinition, m_eCancelInput3) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameCancelOptionDefinition, m_nCancelStart) == 0xc);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameCancelOptionDefinition, m_nCancelDuration) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameCancelOptionDefinition, m_nCancelInputBuffer) == 0x14);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameCancelOptionDefinition, m_bRequiresInstall) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameCancelOptionDefinition, m_bAllowCancelOnWhiff) == 0x19);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameCancelOptionDefinition, m_nCancelActionID) == 0x1c);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameCancelOptionDefinition, m_strCancelActionName) == 0x20);
        
        static_assert(sizeof(source2sdk::client::CDOTAFightingGameCancelOptionDefinition) == 0x28);
    };
};
