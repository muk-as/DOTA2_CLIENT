#pragma once
#include "source2sdk/client/CMatch3AbilityBaseDefinition.hpp"
#include "source2sdk/client/Match3AbilityID_t.hpp"
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
    // Standard-layout class: false
    // Size: 0x48
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CMatch3AbilityDefinition : public client::CMatch3AbilityBaseDefinition
    {
    public:
        client::Match3AbilityID_t m_unAbilityID; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x3c[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMatch3AbilityDefinition because it is not a standard-layout class
    static_assert(sizeof(CMatch3AbilityDefinition) == 0x48);
};
