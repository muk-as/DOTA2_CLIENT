#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Has Trivial Destructor
        // 
        // static metadata: MNetworkVarNames "Vector m_vOrigin"
        // static metadata: MNetworkVarNames "Vector m_vStart"
        // static metadata: MNetworkVarNames "Vector m_vNormal"
        // static metadata: MNetworkVarNames "QAngle m_vAngles"
        // static metadata: MNetworkVarNames "CEntityHandle m_hEntity"
        // static metadata: MNetworkVarNames "CEntityHandle m_hOtherEntity"
        // static metadata: MNetworkVarNames "float32 m_flScale"
        // static metadata: MNetworkVarNames "float32 m_flMagnitude"
        // static metadata: MNetworkVarNames "float32 m_flRadius"
        // static metadata: MNetworkVarNames "CUtlStringToken m_nSurfaceProp"
        // static metadata: MNetworkVarNames "HParticleSystemDefinition m_nEffectIndex"
        // static metadata: MNetworkVarNames "uint32 m_nDamageType"
        // static metadata: MNetworkVarNames "uint8 m_nPenetrate"
        // static metadata: MNetworkVarNames "uint16 m_nMaterial"
        // static metadata: MNetworkVarNames "int16 m_nHitBox"
        // static metadata: MNetworkVarNames "uint8 m_nColor"
        // static metadata: MNetworkVarNames "uint8 m_fFlags"
        // static metadata: MNetworkVarNames "AttachmentHandle_t m_nAttachmentIndex"
        // static metadata: MNetworkVarNames "CUtlStringToken m_nAttachmentName"
        // static metadata: MNetworkVarNames "uint16 m_iEffectName"
        // static metadata: MNetworkVarNames "uint8 m_nExplosionType"
        #pragma pack(push, 1)
        class CEffectData
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord_integral"
            Vector m_vOrigin; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord_integral"
            Vector m_vStart; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "normal"
            Vector m_vNormal; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle"
            QAngle m_vAngles; // 0x_            
            // metadata: MNetworkEnable
            CEntityHandle m_hEntity; // 0x_            
            // metadata: MNetworkEnable
            CEntityHandle m_hOtherEntity; // 0x_            
            // metadata: MNetworkEnable
            float m_flScale; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "12"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1023,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_flMagnitude; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1023,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_flRadius; // 0x_            
            // metadata: MNetworkEnable
            CUtlStringToken m_nSurfaceProp; // 0x_            
            // metadata: MNetworkEnable
            // m_nEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nEffectIndex;
            char m_nEffectIndex[0x_]; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_nDamageType; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_nPenetrate; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::uint16_t m_nMaterial; // 0x_            
            // metadata: MNetworkEnable
            std::int16_t m_nHitBox; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_nColor; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_fFlags; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::modellib::AttachmentHandle_t m_nAttachmentIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            CUtlStringToken m_nAttachmentName; // 0x_            
            // metadata: MNetworkEnable
            std::uint16_t m_iEffectName; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_nExplosionType; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CEffectData, m_vOrigin) == 0x_);
        static_assert(offsetof(source2sdk::client::CEffectData, m_vStart) == 0x_);
        static_assert(offsetof(source2sdk::client::CEffectData, m_vNormal) == 0x_);
        static_assert(offsetof(source2sdk::client::CEffectData, m_vAngles) == 0x_);
        static_assert(offsetof(source2sdk::client::CEffectData, m_hEntity) == 0x_);
        static_assert(offsetof(source2sdk::client::CEffectData, m_hOtherEntity) == 0x_);
        static_assert(offsetof(source2sdk::client::CEffectData, m_flScale) == 0x_);
        static_assert(offsetof(source2sdk::client::CEffectData, m_flMagnitude) == 0x_);
        static_assert(offsetof(source2sdk::client::CEffectData, m_flRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::CEffectData, m_nSurfaceProp) == 0x_);
        static_assert(offsetof(source2sdk::client::CEffectData, m_nEffectIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CEffectData, m_nDamageType) == 0x_);
        static_assert(offsetof(source2sdk::client::CEffectData, m_nPenetrate) == 0x_);
        static_assert(offsetof(source2sdk::client::CEffectData, m_nMaterial) == 0x_);
        static_assert(offsetof(source2sdk::client::CEffectData, m_nHitBox) == 0x_);
        static_assert(offsetof(source2sdk::client::CEffectData, m_nColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CEffectData, m_fFlags) == 0x_);
        static_assert(offsetof(source2sdk::client::CEffectData, m_nAttachmentIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CEffectData, m_nAttachmentName) == 0x_);
        static_assert(offsetof(source2sdk::client::CEffectData, m_iEffectName) == 0x_);
        static_assert(offsetof(source2sdk::client::CEffectData, m_nExplosionType) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CEffectData) == 0x_);
    };
};
