#pragma once
#include "source2sdk/client/EOverworldTokenType.hpp"
#include "source2sdk/client/OverworldTokenID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x40
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
        client::OverworldTokenID_t m_unID; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x01[0x7]; // 0x1
        // metadata: MPropertyDescription
        CUtlString m_sName; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x10[0x28]; // 0x10
        // metadata: MPropertyDescription
        client::EOverworldTokenType m_eTokenType; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x3c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAOverworldToken, m_unID) == 0x0);
    static_assert(offsetof(CDOTAOverworldToken, m_sName) == 0x8);
    static_assert(offsetof(CDOTAOverworldToken, m_eTokenType) == 0x38);
    
    static_assert(sizeof(CDOTAOverworldToken) == 0x40);
};
