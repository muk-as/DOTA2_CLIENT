#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xf48
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        // 
        // static metadata: MNetworkIncludeByUserGroup "Origin"
        // static metadata: MNetworkIncludeByName "CGameSceneNode::m_angRotation"
        // static metadata: MNetworkIncludeByName "m_hOwnerEntity"
        // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hParent"
        // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
        // static metadata: MNetworkIncludeByName "m_nameStringableIndex"
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "char m_szSnapshotFileName"
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "bool m_bFrozen"
        // static metadata: MNetworkVarNames "float m_flFreezeTransitionDuration"
        // static metadata: MNetworkVarNames "int m_nStopType"
        // static metadata: MNetworkVarNames "bool m_bAnimateDuringGameplayPause"
        // static metadata: MNetworkVarNames "HParticleSystemDefinitionStrong m_iEffectIndex"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
        // static metadata: MNetworkVarNames "float32 m_flPreSimTime"
        // static metadata: MNetworkVarNames "Vector m_vServerControlPoints"
        // static metadata: MNetworkVarNames "uint8 m_iServerControlPointAssignments"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity > m_hControlPointEnts"
        // static metadata: MNetworkVarNames "bool m_bNoSave"
        // static metadata: MNetworkVarNames "bool m_bNoFreeze"
        // static metadata: MNetworkVarNames "bool m_bNoRamp"
        #pragma pack(push, 1)
        class C_ParticleSystem : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            char m_szSnapshotFileName[512]; // 0x998            
            // metadata: MNetworkEnable
            bool m_bActive; // 0xb98            
            // metadata: MNetworkEnable
            bool m_bFrozen; // 0xb99            
            uint8_t _pad0b9a[0x2]; // 0xb9a
            // metadata: MNetworkEnable
            float m_flFreezeTransitionDuration; // 0xb9c            
            // metadata: MNetworkEnable
            std::int32_t m_nStopType; // 0xba0            
            // metadata: MNetworkEnable
            bool m_bAnimateDuringGameplayPause; // 0xba4            
            uint8_t _pad0ba5[0x3]; // 0xba5
            // metadata: MNetworkEnable
            // m_iEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEffectIndex;
            char m_iEffectIndex[0x8]; // 0xba8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xbb0            
            // metadata: MNetworkEnable
            float m_flPreSimTime; // 0xbb4            
            // metadata: MNetworkEnable
            Vector m_vServerControlPoints[4]; // 0xbb8            
            // metadata: MNetworkEnable
            std::uint8_t m_iServerControlPointAssignments[4]; // 0xbe8            
            // metadata: MNetworkEnable
            // m_hControlPointEnts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hControlPointEnts[64];
            char m_hControlPointEnts[0x100]; // 0xbec            
            // metadata: MNetworkEnable
            bool m_bNoSave; // 0xcec            
            // metadata: MNetworkEnable
            bool m_bNoFreeze; // 0xced            
            // metadata: MNetworkEnable
            bool m_bNoRamp; // 0xcee            
            bool m_bStartActive; // 0xcef            
            CUtlSymbolLarge m_iszEffectName; // 0xcf0            
            CUtlSymbolLarge m_iszControlPointNames[64]; // 0xcf8            
            std::int32_t m_nDataCP; // 0xef8            
            Vector m_vecDataCPValue; // 0xefc            
            std::int32_t m_nTintCP; // 0xf08            
            Color m_clrTint; // 0xf0c            
            uint8_t _pad0f10[0x20]; // 0xf10
            bool m_bOldActive; // 0xf30            
            bool m_bOldFrozen; // 0xf31            
            uint8_t _pad0f32[0x16];
            
            // Datamap fields:
            // void InputStart; // 0x0
            // void InputStop; // 0x0
            // float InputFreeze; // 0x0
            // float InputThaw; // 0x0
            // void InputStopEndCap; // 0x0
            // void InputDestroy; // 0x0
            // CUtlSymbolLarge InputSetControlPoint; // 0x0
            // float InputSetDataControlPointX; // 0x0
            // float InputSetDataControlPointY; // 0x0
            // float InputSetDataControlPointZ; // 0x0
            // void C_ParticleSystemStartParticleSystemThink; // 0x0
            // CUtlString cpoint%d_value[64]; // 0x7fffffff
            // void m_pEffect; // 0xf10
            // void m_iOldEffectIndex; // 0xf38
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ParticleSystem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ParticleSystem) == 0xf48);
    };
};
