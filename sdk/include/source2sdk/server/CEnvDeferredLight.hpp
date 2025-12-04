#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CModelPointEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
        class CEnvDeferredLight : public source2sdk::server::CModelPointEntity
        {
        public:
            // m_hTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetEntity;
            char m_hTargetEntity[0x_]; // 0x_            
            // metadata: MNetworkEnable
            Color m_LightColor; // 0x_            
            // metadata: MNetworkEnable
            float m_flIntensity; // 0x_            
            // metadata: MNetworkEnable
            float m_flLightSize; // 0x_            
            // metadata: MNetworkEnable
            float m_flSpotFoV; // 0x_            
            // metadata: MNetworkEnable
            QAngle m_vLightDirection; // 0x_            
            // metadata: MNetworkEnable
            float m_flStartFalloff; // 0x_            
            // metadata: MNetworkEnable
            float m_flDistanceFalloff; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_nFlags; // 0x_            
            // metadata: MNetworkEnable
            char m_ProjectedTextureName[512]; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputTurnOn; // 0x_
            // void InputTurnOff; // 0x_
            // Color InputSetLightColor; // 0x_
            // float InputSetLightIntensity; // 0x_
            // float InputSetLightRadius; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvDeferredLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvDeferredLight) == 0x_);
    };
};
