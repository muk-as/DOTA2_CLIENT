#pragma once
#include "source2sdk/client/MoveType_t.hpp"
#include "source2sdk/server/CItem.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x878
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CScriptItem : public server::CItem
    {
    public:
        client::MoveType_t m_MoveTypeOverride; // 0x870        
        [[maybe_unused]] std::uint8_t pad_0x871[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CScriptItem because it is not a standard-layout class
    static_assert(sizeof(CScriptItem) == 0x878);
};
