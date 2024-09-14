#pragma once
#include "source2sdk/server/CBaseTrigger.hpp"
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
    // Size: 0x968
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CTriggerTeleport : public server::CBaseTrigger
    {
    public:
        CUtlSymbolLarge m_iLandmark; // 0x958        
        bool m_bUseLandmarkAngles; // 0x960        
        bool m_bMirrorPlayer; // 0x961        
        [[maybe_unused]] std::uint8_t pad_0x962[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerTeleport because it is not a standard-layout class
    static_assert(sizeof(CTriggerTeleport) == 0x968);
};
