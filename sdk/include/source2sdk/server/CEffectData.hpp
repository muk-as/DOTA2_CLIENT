#pragma once
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x70
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
    // static metadata: MNetworkVarNames "uint16 m_nHitBox"
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
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord_integral"
        Vector m_vOrigin; // 0x8        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord_integral"
        Vector m_vStart; // 0x14        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "normal"
        Vector m_vNormal; // 0x20        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        QAngle m_vAngles; // 0x2c        
        // metadata: MNetworkEnable
        CEntityHandle m_hEntity; // 0x38        
        // metadata: MNetworkEnable
        CEntityHandle m_hOtherEntity; // 0x3c        
        // metadata: MNetworkEnable
        float m_flScale; // 0x40        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "12"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "1023,000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_flMagnitude; // 0x44        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "10"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "1023,000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_flRadius; // 0x48        
        // metadata: MNetworkEnable
        CUtlStringToken m_nSurfaceProp; // 0x4c        
        // metadata: MNetworkEnable
        // m_nEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nEffectIndex;
        char m_nEffectIndex[0x8]; // 0x50        
        // metadata: MNetworkEnable
        uint32_t m_nDamageType; // 0x58        
        // metadata: MNetworkEnable
        uint8_t m_nPenetrate; // 0x5c        
        [[maybe_unused]] std::uint8_t pad_0x5d[0x1]; // 0x5d
        // metadata: MNetworkEnable
        uint16_t m_nMaterial; // 0x5e        
        // metadata: MNetworkEnable
        uint16_t m_nHitBox; // 0x60        
        // metadata: MNetworkEnable
        uint8_t m_nColor; // 0x62        
        // metadata: MNetworkEnable
        uint8_t m_fFlags; // 0x63        
        // metadata: MNetworkEnable
        modellib::AttachmentHandle_t m_nAttachmentIndex; // 0x64        
        [[maybe_unused]] std::uint8_t pad_0x65[0x3]; // 0x65
        // metadata: MNetworkEnable
        CUtlStringToken m_nAttachmentName; // 0x68        
        // metadata: MNetworkEnable
        uint16_t m_iEffectName; // 0x6c        
        // metadata: MNetworkEnable
        uint8_t m_nExplosionType; // 0x6e        
        [[maybe_unused]] std::uint8_t pad_0x6f[0x1];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CEffectData, m_vOrigin) == 0x8);
    static_assert(offsetof(CEffectData, m_vStart) == 0x14);
    static_assert(offsetof(CEffectData, m_vNormal) == 0x20);
    static_assert(offsetof(CEffectData, m_vAngles) == 0x2c);
    static_assert(offsetof(CEffectData, m_hEntity) == 0x38);
    static_assert(offsetof(CEffectData, m_hOtherEntity) == 0x3c);
    static_assert(offsetof(CEffectData, m_flScale) == 0x40);
    static_assert(offsetof(CEffectData, m_flMagnitude) == 0x44);
    static_assert(offsetof(CEffectData, m_flRadius) == 0x48);
    static_assert(offsetof(CEffectData, m_nSurfaceProp) == 0x4c);
    static_assert(offsetof(CEffectData, m_nEffectIndex) == 0x50);
    static_assert(offsetof(CEffectData, m_nDamageType) == 0x58);
    static_assert(offsetof(CEffectData, m_nPenetrate) == 0x5c);
    static_assert(offsetof(CEffectData, m_nMaterial) == 0x5e);
    static_assert(offsetof(CEffectData, m_nHitBox) == 0x60);
    static_assert(offsetof(CEffectData, m_nColor) == 0x62);
    static_assert(offsetof(CEffectData, m_fFlags) == 0x63);
    static_assert(offsetof(CEffectData, m_nAttachmentIndex) == 0x64);
    static_assert(offsetof(CEffectData, m_nAttachmentName) == 0x68);
    static_assert(offsetof(CEffectData, m_iEffectName) == 0x6c);
    static_assert(offsetof(CEffectData, m_nExplosionType) == 0x6e);
    
    static_assert(sizeof(CEffectData) == 0x70);
};
