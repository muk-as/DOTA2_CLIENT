#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Creep.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_DOTA_BaseNPC;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1828
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Unit_Undying_Zombie : public client::C_DOTA_BaseNPC_Creep
    {
    public:
        client::CountdownTimer m_ctRespawn; // 0x1808        
        client::C_DOTA_BaseNPC* m_pTombstone; // 0x1820        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Unit_Undying_Zombie because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Unit_Undying_Zombie) == 0x1828);
};
