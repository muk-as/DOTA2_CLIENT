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
    // Size: 0x8f8
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CEnvBeam : public server::CBeam
    {
    public:
        int32_t m_active; // 0x850        
        [[maybe_unused]] std::uint8_t pad_0x854[0x4]; // 0x854
        // m_spriteTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_spriteTexture;
        char m_spriteTexture[0x8]; // 0x858        
        CUtlSymbolLarge m_iszStartEntity; // 0x860        
        CUtlSymbolLarge m_iszEndEntity; // 0x868        
        float m_life; // 0x870        
        float m_boltWidth; // 0x874        
        float m_noiseAmplitude; // 0x878        
        int32_t m_speed; // 0x87c        
        float m_restrike; // 0x880        
        [[maybe_unused]] std::uint8_t pad_0x884[0x4]; // 0x884
        CUtlSymbolLarge m_iszSpriteName; // 0x888        
        int32_t m_frameStart; // 0x890        
        Vector m_vEndPointWorld; // 0x894        
        Vector m_vEndPointRelative; // 0x8a0        
        float m_radius; // 0x8ac        
        server::Touch_t m_TouchType; // 0x8b0        
        [[maybe_unused]] std::uint8_t pad_0x8b4[0x4]; // 0x8b4
        CUtlSymbolLarge m_iFilterName; // 0x8b8        
        // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hFilter;
        char m_hFilter[0x4]; // 0x8c0        
        [[maybe_unused]] std::uint8_t pad_0x8c4[0x4]; // 0x8c4
        CUtlSymbolLarge m_iszDecal; // 0x8c8        
        entity2::CEntityIOOutput m_OnTouchedByEntity; // 0x8d0        
        
        // Datamap fields:
        // int32_t m_nClipStyle; // 0x834
        // void CEnvBeamStrikeThink; // 0x0
        // void CEnvBeamUpdateThink; // 0x0
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // void InputToggle; // 0x0
        // void InputStrikeOnce; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvBeam because it is not a standard-layout class
    static_assert(sizeof(CEnvBeam) == 0x8f8);
};
