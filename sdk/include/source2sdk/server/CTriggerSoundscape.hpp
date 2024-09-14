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
    class CBasePlayerPawn;
};

namespace source2sdk::server
{
    class CEnvSoundscapeTriggerable;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x980
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CTriggerSoundscape : public server::CBaseTrigger
    {
    public:
        // m_hSoundscape has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CEnvSoundscapeTriggerable> m_hSoundscape;
        char m_hSoundscape[0x4]; // 0x958        
        [[maybe_unused]] std::uint8_t pad_0x95c[0x4]; // 0x95c
        CUtlSymbolLarge m_SoundscapeName; // 0x960        
        // m_spectators has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBasePlayerPawn>> m_spectators;
        char m_spectators[0x18]; // 0x968        
        
        // Datamap fields:
        // void CTriggerSoundscapePlayerUpdateThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerSoundscape because it is not a standard-layout class
    static_assert(sizeof(CTriggerSoundscape) == 0x980);
};
