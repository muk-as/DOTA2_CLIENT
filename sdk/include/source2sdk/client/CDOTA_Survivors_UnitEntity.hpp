#pragma once
#include "source2sdk/client/C_PortraitWorldUnit.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x1d10
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class CDOTA_Survivors_UnitEntity : public client::C_PortraitWorldUnit
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1cc0[0x50];
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CDOTA_Survivors_UnitEntity) == 0x1d10);
};
