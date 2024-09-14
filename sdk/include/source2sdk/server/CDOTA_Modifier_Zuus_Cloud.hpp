#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Zuus_Cloud : public client::CDOTA_Buff
    {
    public:
        server::CountdownTimer m_CloudBoltTimer; // 0x16e8        
        float cloud_bolt_interval; // 0x1700        
        int32_t cloud_radius; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Zuus_Cloud because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Zuus_Cloud) == 0x1708);
};
