#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1860
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Unit_VisageFamiliar : public server::CDOTA_BaseNPC_Creep
    {
    public:
        server::CountdownTimer ctTimer; // 0x1840        
        client::ParticleIndex_t m_nFXAmbient; // 0x1858        
        [[maybe_unused]] std::uint8_t pad_0x185c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_VisageFamiliar because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_VisageFamiliar) == 0x1860);
};
