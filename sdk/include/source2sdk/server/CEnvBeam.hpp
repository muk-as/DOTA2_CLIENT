#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/server/CBeam.hpp"
#include "source2sdk/server/Touch_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x8d0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CEnvBeam : public server::CBeam
    {
    public:
        int32_t m_active; // 0x828        
        [[maybe_unused]] std::uint8_t pad_0x82c[0x4]; // 0x82c
        // m_spriteTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_spriteTexture;
        char m_spriteTexture[0x8]; // 0x830        
        CUtlSymbolLarge m_iszStartEntity; // 0x838        
        CUtlSymbolLarge m_iszEndEntity; // 0x840        
        float m_life; // 0x848        
        float m_boltWidth; // 0x84c        
        float m_noiseAmplitude; // 0x850        
        int32_t m_speed; // 0x854        
        float m_restrike; // 0x858        
        [[maybe_unused]] std::uint8_t pad_0x85c[0x4]; // 0x85c
        CUtlSymbolLarge m_iszSpriteName; // 0x860        
        int32_t m_frameStart; // 0x868        
        Vector m_vEndPointWorld; // 0x86c        
        Vector m_vEndPointRelative; // 0x878        
        float m_radius; // 0x884        
        server::Touch_t m_TouchType; // 0x888        
        [[maybe_unused]] std::uint8_t pad_0x88c[0x4]; // 0x88c
        CUtlSymbolLarge m_iFilterName; // 0x890        
        // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hFilter;
        char m_hFilter[0x4]; // 0x898        
        [[maybe_unused]] std::uint8_t pad_0x89c[0x4]; // 0x89c
        CUtlSymbolLarge m_iszDecal; // 0x8a0        
        entity2::CEntityIOOutput m_OnTouchedByEntity; // 0x8a8        
        
        // Datamap fields:
        // int32_t m_nClipStyle; // 0x80c
        // void CEnvBeamStrikeThink; // 0x0
        // void CEnvBeamUpdateThink; // 0x0
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // void InputToggle; // 0x0
        // void InputStrikeOnce; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvBeam because it is not a standard-layout class
    static_assert(sizeof(CEnvBeam) == 0x8d0);
};
