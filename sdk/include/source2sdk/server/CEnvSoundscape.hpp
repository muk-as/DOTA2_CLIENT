#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x580
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CEnvSoundscape : public server::CBaseEntity
    {
    public:
        entity2::CEntityIOOutput m_OnPlay; // 0x4e0        
        float m_flRadius; // 0x508        
        [[maybe_unused]] std::uint8_t pad_0x50c[0x4]; // 0x50c
        CUtlSymbolLarge m_soundEventName; // 0x510        
        bool m_bOverrideWithEvent; // 0x518        
        [[maybe_unused]] std::uint8_t pad_0x519[0x3]; // 0x519
        int32_t m_soundscapeIndex; // 0x51c        
        int32_t m_soundscapeEntityListId; // 0x520        
        [[maybe_unused]] std::uint8_t pad_0x524[0x4]; // 0x524
        CUtlSymbolLarge m_positionNames[8]; // 0x528        
        // m_hProxySoundscape has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CEnvSoundscape> m_hProxySoundscape;
        char m_hProxySoundscape[0x4]; // 0x568        
        bool m_bDisabled; // 0x56c        
        [[maybe_unused]] std::uint8_t pad_0x56d[0x3]; // 0x56d
        CUtlSymbolLarge m_soundscapeName; // 0x570        
        uint32_t m_soundEventHash; // 0x578        
        [[maybe_unused]] std::uint8_t pad_0x57c[0x4];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void InputToggleEnabled; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvSoundscape because it is not a standard-layout class
    static_assert(sizeof(CEnvSoundscape) == 0x580);
};
