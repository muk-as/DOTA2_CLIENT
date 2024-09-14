#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
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
    // Size: 0x558
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "float m_flScattering"
    // static metadata: MNetworkVarNames "float m_flAnisotropy"
    // static metadata: MNetworkVarNames "float m_flFadeSpeed"
    // static metadata: MNetworkVarNames "float m_flDrawDistance"
    // static metadata: MNetworkVarNames "float m_flFadeInStart"
    // static metadata: MNetworkVarNames "float m_flFadeInEnd"
    // static metadata: MNetworkVarNames "float m_flIndirectStrength"
    // static metadata: MNetworkVarNames "int m_nVolumeDepth"
    // static metadata: MNetworkVarNames "float m_fFirstVolumeSliceThickness"
    // static metadata: MNetworkVarNames "int m_nIndirectTextureDimX"
    // static metadata: MNetworkVarNames "int m_nIndirectTextureDimY"
    // static metadata: MNetworkVarNames "int m_nIndirectTextureDimZ"
    // static metadata: MNetworkVarNames "Vector m_vBoxMins"
    // static metadata: MNetworkVarNames "Vector m_vBoxMaxs"
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartAnisoTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartScatterTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartDrawDistanceTime"
    // static metadata: MNetworkVarNames "float m_flStartAnisotropy"
    // static metadata: MNetworkVarNames "float m_flStartScattering"
    // static metadata: MNetworkVarNames "float m_flStartDrawDistance"
    // static metadata: MNetworkVarNames "float m_flDefaultAnisotropy"
    // static metadata: MNetworkVarNames "float m_flDefaultScattering"
    // static metadata: MNetworkVarNames "float m_flDefaultDrawDistance"
    // static metadata: MNetworkVarNames "bool m_bStartDisabled"
    // static metadata: MNetworkVarNames "bool m_bEnableIndirect"
    // static metadata: MNetworkVarNames "bool m_bIndirectUseLPVs"
    // static metadata: MNetworkVarNames "bool m_bIsMaster"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_hFogIndirectTexture"
    // static metadata: MNetworkVarNames "int m_nForceRefreshCount"
    // static metadata: MNetworkVarNames "float m_fNoiseSpeed"
    // static metadata: MNetworkVarNames "float m_fNoiseStrength"
    // static metadata: MNetworkVarNames "Vector m_vNoiseScale"
    #pragma pack(push, 1)
    class CEnvVolumetricFogController : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        float m_flScattering; // 0x4b8        
        // metadata: MNetworkEnable
        float m_flAnisotropy; // 0x4bc        
        // metadata: MNetworkEnable
        float m_flFadeSpeed; // 0x4c0        
        // metadata: MNetworkEnable
        float m_flDrawDistance; // 0x4c4        
        // metadata: MNetworkEnable
        float m_flFadeInStart; // 0x4c8        
        // metadata: MNetworkEnable
        float m_flFadeInEnd; // 0x4cc        
        // metadata: MNetworkEnable
        float m_flIndirectStrength; // 0x4d0        
        // metadata: MNetworkEnable
        int32_t m_nVolumeDepth; // 0x4d4        
        // metadata: MNetworkEnable
        float m_fFirstVolumeSliceThickness; // 0x4d8        
        // metadata: MNetworkEnable
        int32_t m_nIndirectTextureDimX; // 0x4dc        
        // metadata: MNetworkEnable
        int32_t m_nIndirectTextureDimY; // 0x4e0        
        // metadata: MNetworkEnable
        int32_t m_nIndirectTextureDimZ; // 0x4e4        
        // metadata: MNetworkEnable
        Vector m_vBoxMins; // 0x4e8        
        // metadata: MNetworkEnable
        Vector m_vBoxMaxs; // 0x4f4        
        // metadata: MNetworkEnable
        bool m_bActive; // 0x500        
        [[maybe_unused]] std::uint8_t pad_0x501[0x3]; // 0x501
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartAnisoTime; // 0x504        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartScatterTime; // 0x508        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartDrawDistanceTime; // 0x50c        
        // metadata: MNetworkEnable
        float m_flStartAnisotropy; // 0x510        
        // metadata: MNetworkEnable
        float m_flStartScattering; // 0x514        
        // metadata: MNetworkEnable
        float m_flStartDrawDistance; // 0x518        
        // metadata: MNetworkEnable
        float m_flDefaultAnisotropy; // 0x51c        
        // metadata: MNetworkEnable
        float m_flDefaultScattering; // 0x520        
        // metadata: MNetworkEnable
        float m_flDefaultDrawDistance; // 0x524        
        // metadata: MNetworkEnable
        bool m_bStartDisabled; // 0x528        
        // metadata: MNetworkEnable
        bool m_bEnableIndirect; // 0x529        
        // metadata: MNetworkEnable
        bool m_bIndirectUseLPVs; // 0x52a        
        // metadata: MNetworkEnable
        bool m_bIsMaster; // 0x52b        
        [[maybe_unused]] std::uint8_t pad_0x52c[0x4]; // 0x52c
        // metadata: MNetworkEnable
        // m_hFogIndirectTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hFogIndirectTexture;
        char m_hFogIndirectTexture[0x8]; // 0x530        
        // metadata: MNetworkEnable
        int32_t m_nForceRefreshCount; // 0x538        
        // metadata: MNetworkEnable
        float m_fNoiseSpeed; // 0x53c        
        // metadata: MNetworkEnable
        float m_fNoiseStrength; // 0x540        
        // metadata: MNetworkEnable
        Vector m_vNoiseScale; // 0x544        
        bool m_bFirstTime; // 0x550        
        [[maybe_unused]] std::uint8_t pad_0x551[0x7];
        
        // Datamap fields:
        // void InputSetToDefaults; // 0x0
        // float InputSetScattering; // 0x0
        // float InputSetAnisotropy; // 0x0
        // float InputSetFadeSpeed; // 0x0
        // float InputSetDrawDistance; // 0x0
        // bool EnableIndirect; // 0x0
        // bool InputEnable; // 0x0
        // bool InputDisable; // 0x0
        // void ForceRefresh; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvVolumetricFogController because it is not a standard-layout class
    static_assert(sizeof(CEnvVolumetricFogController) == 0x558);
};
