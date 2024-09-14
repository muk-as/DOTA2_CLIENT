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
    // Size: 0x820
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class C_DOTAWorldParticleSystem : public client::C_BaseModelEntity
    {
    public:
        int32_t m_nType; // 0x7d8        
        client::ParticleIndex_t m_iClientEffectIndex; // 0x7dc        
        CUtlSymbolLarge m_szEffectName; // 0x7e0        
        CUtlSymbolLarge m_szTargetName; // 0x7e8        
        CUtlSymbolLarge m_szControlPoint; // 0x7f0        
        animationsystem::HSequence m_hOverrideSequence; // 0x7f8        
        [[maybe_unused]] std::uint8_t pad_0x7fc[0x4]; // 0x7fc
        // m_hOverrideModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_hOverrideModel;
        char m_hOverrideModel[0x8]; // 0x800        
        Vector m_vModelScale; // 0x808        
        int32_t m_nSkinOverride; // 0x814        
        bool m_bDayTime; // 0x818        
        bool m_bNightTime; // 0x819        
        bool m_bShowInFow; // 0x81a        
        bool m_bShowWhileDynamicWeatherActive; // 0x81b        
        bool m_bAnimateDuringGameplayPause; // 0x81c        
        [[maybe_unused]] std::uint8_t pad_0x81d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTAWorldParticleSystem because it is not a standard-layout class
    static_assert(sizeof(C_DOTAWorldParticleSystem) == 0x820);
};
