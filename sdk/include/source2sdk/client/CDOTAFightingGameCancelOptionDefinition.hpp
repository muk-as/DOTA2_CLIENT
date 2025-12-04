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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAFightingGameCancelOptionDefinition
        {
        public:
            source2sdk::client::EFightingGameButtonBit m_eCancelInput; // 0x_            
            source2sdk::client::EFightingGameButtonBit m_eCancelInput2; // 0x_            
            source2sdk::client::EFightingGameButtonBit m_eCancelInput3; // 0x_            
            std::int32_t m_nCancelStart; // 0x_            
            std::int32_t m_nCancelDuration; // 0x_            
            std::int32_t m_nCancelInputBuffer; // 0x_            
            bool m_bRequiresInstall; // 0x_            
            bool m_bAllowCancelOnWhiff; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::EFightingGameActionID m_nCancelActionID; // 0x_            
            CUtlString m_strCancelActionName; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameCancelOptionDefinition, m_eCancelInput) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameCancelOptionDefinition, m_eCancelInput2) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameCancelOptionDefinition, m_eCancelInput3) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameCancelOptionDefinition, m_nCancelStart) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameCancelOptionDefinition, m_nCancelDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameCancelOptionDefinition, m_nCancelInputBuffer) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameCancelOptionDefinition, m_bRequiresInstall) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameCancelOptionDefinition, m_bAllowCancelOnWhiff) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameCancelOptionDefinition, m_nCancelActionID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameCancelOptionDefinition, m_strCancelActionName) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAFightingGameCancelOptionDefinition) == 0x_);
    };
};
