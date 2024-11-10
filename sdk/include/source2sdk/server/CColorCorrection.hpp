#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x718
    // Has VTable
    // Construct allowed
    // MNetworkNoBase
    // 
    // static metadata: MNetworkIncludeByUserGroup "Origin"
    // static metadata: MNetworkVarNames "float32 m_flFadeInDuration"
    // static metadata: MNetworkVarNames "float32 m_flFadeOutDuration"
    // static metadata: MNetworkVarNames "float32 m_flMaxWeight"
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    // static metadata: MNetworkVarNames "bool m_bMaster"
    // static metadata: MNetworkVarNames "bool m_bClientSide"
    // static metadata: MNetworkVarNames "bool m_bExclusive"
    // static metadata: MNetworkVarNames "float32 m_MinFalloff"
    // static metadata: MNetworkVarNames "float32 m_MaxFalloff"
    // static metadata: MNetworkVarNames "float32 m_flCurWeight"
    // static metadata: MNetworkVarNames "char m_netlookupFilename"
    #pragma pack(push, 1)
    class CColorCorrection : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        float m_flFadeInDuration; // 0x4e0        
        // metadata: MNetworkEnable
        float m_flFadeOutDuration; // 0x4e4        
        float m_flStartFadeInWeight; // 0x4e8        
        float m_flStartFadeOutWeight; // 0x4ec        
        entity2::GameTime_t m_flTimeStartFadeIn; // 0x4f0        
        entity2::GameTime_t m_flTimeStartFadeOut; // 0x4f4        
        // metadata: MNetworkEnable
        float m_flMaxWeight; // 0x4f8        
        bool m_bStartDisabled; // 0x4fc        
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x4fd        
        // metadata: MNetworkEnable
        bool m_bMaster; // 0x4fe        
        // metadata: MNetworkEnable
        bool m_bClientSide; // 0x4ff        
        // metadata: MNetworkEnable
        bool m_bExclusive; // 0x500        
        [[maybe_unused]] std::uint8_t pad_0x501[0x3]; // 0x501
        // metadata: MNetworkEnable
        float m_MinFalloff; // 0x504        
        // metadata: MNetworkEnable
        float m_MaxFalloff; // 0x508        
        // metadata: MNetworkEnable
        float m_flCurWeight; // 0x50c        
        // metadata: MNetworkEnable
        char m_netlookupFilename[512]; // 0x510        
        CUtlSymbolLarge m_lookupFilename; // 0x710        
        
        // Datamap fields:
        // void CColorCorrectionFadeInThink; // 0x0
        // void CColorCorrectionFadeOutThink; // 0x0
        // void m_netlookupFilename; // 0x510
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // float InputSetFadeInDuration; // 0x0
        // float InputSetFadeOutDuration; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CColorCorrection because it is not a standard-layout class
    static_assert(sizeof(CColorCorrection) == 0x718);
};
