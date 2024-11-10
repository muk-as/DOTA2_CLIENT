#pragma once
#include "source2sdk/server/CDOTA_BaseNPC_Creep.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CDOTA_BaseNPC;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1880
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Unit_Undying_Zombie : public server::CDOTA_BaseNPC_Creep
    {
    public:
        server::CountdownTimer m_ctRespawn; // 0x1860        
        server::CDOTA_BaseNPC* m_pTombstone; // 0x1878        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Undying_Zombie because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Undying_Zombie) == 0x1880);
};
