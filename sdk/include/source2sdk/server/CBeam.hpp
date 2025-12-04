#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BeamClipStyle_t.hpp"
#include "source2sdk/client/BeamType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
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
        // MNetworkNoBase
        // 
        // static metadata: MNetworkIncludeByUserGroup "Origin"
        // static metadata: MNetworkIncludeByName "m_nModelIndex"
        // static metadata: MNetworkIncludeByName "m_nRenderFX"
        // static metadata: MNetworkIncludeByName "m_nRenderMode"
        // static metadata: MNetworkIncludeByName "m_clrRender"
        // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hParent"
        // static metadata: MNetworkOverride "m_clrRender"
        // static metadata: MNetworkVarNames "float32 m_flFrameRate"
        // static metadata: MNetworkVarNames "float32 m_flHDRColorScale"
        // static metadata: MNetworkVarNames "uint8 m_nNumBeamEnts"
        // static metadata: MNetworkVarNames "HMaterialStrong m_hBaseMaterial"
        // static metadata: MNetworkVarNames "HMaterialStrong m_nHaloIndex"
        // static metadata: MNetworkVarNames "BeamType_t m_nBeamType"
        // static metadata: MNetworkVarNames "uint32 m_nBeamFlags"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity > m_hAttachEntity"
        // static metadata: MNetworkVarNames "AttachmentHandle_t m_nAttachIndex"
        // static metadata: MNetworkVarNames "float32 m_fWidth"
        // static metadata: MNetworkVarNames "float32 m_fEndWidth"
        // static metadata: MNetworkVarNames "float32 m_fFadeLength"
        // static metadata: MNetworkVarNames "float32 m_fHaloScale"
        // static metadata: MNetworkVarNames "float32 m_fAmplitude"
        // static metadata: MNetworkVarNames "float32 m_fStartFrame"
        // static metadata: MNetworkVarNames "float32 m_fSpeed"
        // static metadata: MNetworkVarNames "float32 m_flFrame"
        // static metadata: MNetworkVarNames "BeamClipStyle_t m_nClipStyle"
        // static metadata: MNetworkVarNames "bool m_bTurnedOff"
        // static metadata: MNetworkVarNames "Vector m_vecEndPos"
        #pragma pack(push, 1)
        class CBeam : public source2sdk::server::CBaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "-25,000000"
            // metadata: MNetworkMaxValue "25,000000"
            // metadata: MNetworkEncodeFlags "2"
            float m_flFrameRate; // 0x_            
            // metadata: MNetworkEnable
            float m_flHDRColorScale; // 0x_            
            source2sdk::entity2::GameTime_t m_flFireTime; // 0x_            
            float m_flDamage; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_nNumBeamEnts; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_hBaseMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hBaseMaterial;
            char m_hBaseMaterial[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_nHaloIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_nHaloIndex;
            char m_nHaloIndex[0x_]; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::BeamType_t m_nBeamType; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_nBeamFlags; // 0x_            
            // metadata: MNetworkEnable
            // m_hAttachEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttachEntity[10];
            char m_hAttachEntity[0x_]; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::modellib::AttachmentHandle_t m_nAttachIndex[10]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "102,300003"
            // metadata: MNetworkEncodeFlags "2"
            float m_fWidth; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "102,300003"
            // metadata: MNetworkEncodeFlags "2"
            float m_fEndWidth; // 0x_            
            // metadata: MNetworkEnable
            float m_fFadeLength; // 0x_            
            // metadata: MNetworkEnable
            float m_fHaloScale; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "64,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_fAmplitude; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "256,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_fStartFrame; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "100,000000"
            float m_fSpeed; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "20"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "256,000000"
            // metadata: MNetworkEncodeFlags "1"
            // metadata: MNetworkPriority "32"
            float m_flFrame; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::BeamClipStyle_t m_nClipStyle; // 0x_            
            // metadata: MNetworkEnable
            bool m_bTurnedOff; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector m_vecEndPos; // 0x_            
            // m_hEndEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEndEntity;
            char m_hEndEntity[0x_]; // 0x_            
            std::int32_t m_nDissolveType; // 0x_            
            
            // Datamap fields:
            // float InputWidth; // 0x_
            // float InputNoise; // 0x_
            // float InputColorRedValue; // 0x_
            // float InputColorGreenValue; // 0x_
            // float InputColorBlueValue; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBeam) == 0x_);
    };
};
