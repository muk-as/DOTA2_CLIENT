#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x868
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class C_DOTAWorldParticleSystem : public client::C_BaseModelEntity
    {
    public:
        int32_t m_nType; // 0x820        
        client::ParticleIndex_t m_iClientEffectIndex; // 0x824        
        CUtlSymbolLarge m_szEffectName; // 0x828        
        CUtlSymbolLarge m_szTargetName; // 0x830        
        CUtlSymbolLarge m_szControlPoint; // 0x838        
        animationsystem::HSequence m_hOverrideSequence; // 0x840        
        [[maybe_unused]] std::uint8_t pad_0x844[0x4]; // 0x844
        // m_hOverrideModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_hOverrideModel;
        char m_hOverrideModel[0x8]; // 0x848        
        Vector m_vModelScale; // 0x850        
        int32_t m_nSkinOverride; // 0x85c        
        bool m_bDayTime; // 0x860        
        bool m_bNightTime; // 0x861        
        bool m_bShowInFow; // 0x862        
        bool m_bShowWhileDynamicWeatherActive; // 0x863        
        bool m_bAnimateDuringGameplayPause; // 0x864        
        [[maybe_unused]] std::uint8_t pad_0x865[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTAWorldParticleSystem because it is not a standard-layout class
    static_assert(sizeof(C_DOTAWorldParticleSystem) == 0x868);
};
