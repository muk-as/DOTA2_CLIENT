#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EOverworldTokenType.hpp"
#include "source2sdk/client/OverworldTokenID_t.hpp"

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
        class CDOTAOverworldToken
        {
        public:
            // metadata: MVDataUniqueMonotonicInt "_editor/next_id_token"
            // metadata: MPropertyAttributeEditor "locked_int()"
            source2sdk::client::OverworldTokenID_t m_unID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription
            CUtlString m_sName; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription
            source2sdk::client::EOverworldTokenType m_eTokenType; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldToken, m_unID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldToken, m_sName) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldToken, m_eTokenType) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldToken) == 0x_);
    };
};
