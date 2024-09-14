#pragma once
#include "source2sdk/client/EFantasyOperationTarget.hpp"
#include "source2sdk/client/FantasyCraftingGemMutation_t.hpp"
#include "source2sdk/client/FantasyOperationID_t.hpp"
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
    // Size: 0x30
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyAutoExpandSelf
    #pragma pack(push, 1)
    struct FantasyCraftOperation_t
    {
    public:
        // metadata: MPropertyDescription "Unique identifier for this operation"
        client::FantasyOperationID_t m_unOperationID; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x02[0x2]; // 0x2
        // metadata: MPropertyDescription "Weight for when rolling which operations to add to the roll board"
        int32_t m_nRollWeight; // 0x4        
        // metadata: MPropertyDescription "What extra input is needed for the operation"
        client::EFantasyOperationTarget m_eTarget; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        // metadata: MPropertyDescription "Localization String describing the operation"
        CUtlString m_sLocDescription; // 0x10        
        // metadata: MPropertyDescription "What operations this will perform"
        // m_vecOperations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::FantasyCraftingGemMutation_t> m_vecOperations;
        char m_vecOperations[0x18]; // 0x18        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FantasyCraftOperation_t, m_unOperationID) == 0x0);
    static_assert(offsetof(FantasyCraftOperation_t, m_nRollWeight) == 0x4);
    static_assert(offsetof(FantasyCraftOperation_t, m_eTarget) == 0x8);
    static_assert(offsetof(FantasyCraftOperation_t, m_sLocDescription) == 0x10);
    static_assert(offsetof(FantasyCraftOperation_t, m_vecOperations) == 0x18);
    
    static_assert(sizeof(FantasyCraftOperation_t) == 0x30);
};
