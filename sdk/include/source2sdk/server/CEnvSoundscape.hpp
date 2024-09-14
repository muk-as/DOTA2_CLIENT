#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CServerOnlyEntity.hpp"
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
    // Size: 0x550
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CEnvSoundscape : public server::CServerOnlyEntity
    {
    public:
        entity2::CEntityIOOutput m_OnPlay; // 0x4b8        
        float m_flRadius; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e4[0x4]; // 0x4e4
        CUtlSymbolLarge m_soundscapeName; // 0x4e8        
        CUtlSymbolLarge m_soundEventName; // 0x4f0        
        bool m_bOverrideWithEvent; // 0x4f8        
        [[maybe_unused]] std::uint8_t pad_0x4f9[0x3]; // 0x4f9
        int32_t m_soundscapeIndex; // 0x4fc        
        int32_t m_soundscapeEntityListId; // 0x500        
        uint32_t m_soundEventHash; // 0x504        
        CUtlSymbolLarge m_positionNames[8]; // 0x508        
        // m_hProxySoundscape has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CEnvSoundscape> m_hProxySoundscape;
        char m_hProxySoundscape[0x4]; // 0x548        
        bool m_bDisabled; // 0x54c        
        [[maybe_unused]] std::uint8_t pad_0x54d[0x3];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void InputToggleEnabled; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvSoundscape because it is not a standard-layout class
    static_assert(sizeof(CEnvSoundscape) == 0x550);
};
