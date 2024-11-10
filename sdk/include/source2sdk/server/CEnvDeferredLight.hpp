#pragma once
#include "source2sdk/server/CModelPointEntity.hpp"
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
    // Size: 0x9e0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "Color m_LightColor"
    // static metadata: MNetworkVarNames "float m_flIntensity"
    // static metadata: MNetworkVarNames "float m_flLightSize"
    // static metadata: MNetworkVarNames "float m_flSpotFoV"
    // static metadata: MNetworkVarNames "QAngle m_vLightDirection"
    // static metadata: MNetworkVarNames "float m_flStartFalloff"
    // static metadata: MNetworkVarNames "float m_flDistanceFalloff"
    // static metadata: MNetworkVarNames "uint m_nFlags"
    // static metadata: MNetworkVarNames "char m_ProjectedTextureName"
    #pragma pack(push, 1)
    class CEnvDeferredLight : public server::CModelPointEntity
    {
    public:
        // m_hTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetEntity;
        char m_hTargetEntity[0x4]; // 0x7b0        
        // metadata: MNetworkEnable
        Color m_LightColor; // 0x7b4        
        // metadata: MNetworkEnable
        float m_flIntensity; // 0x7b8        
        // metadata: MNetworkEnable
        float m_flLightSize; // 0x7bc        
        // metadata: MNetworkEnable
        float m_flSpotFoV; // 0x7c0        
        // metadata: MNetworkEnable
        QAngle m_vLightDirection; // 0x7c4        
        // metadata: MNetworkEnable
        float m_flStartFalloff; // 0x7d0        
        // metadata: MNetworkEnable
        float m_flDistanceFalloff; // 0x7d4        
        // metadata: MNetworkEnable
        uint32_t m_nFlags; // 0x7d8        
        // metadata: MNetworkEnable
        char m_ProjectedTextureName[512]; // 0x7dc        
        [[maybe_unused]] std::uint8_t pad_0x9dc[0x4];
        
        // Datamap fields:
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // Color InputSetLightColor; // 0x0
        // float InputSetLightIntensity; // 0x0
        // float InputSetLightRadius; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvDeferredLight because it is not a standard-layout class
    static_assert(sizeof(CEnvDeferredLight) == 0x9e0);
};
