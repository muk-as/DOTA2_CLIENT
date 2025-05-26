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
        // Size: 0xf20
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
            char m_szSnapshotFileName[512]; // 0x970            
            // metadata: MNetworkEnable
            bool m_bActive; // 0xb70            
            // metadata: MNetworkEnable
            bool m_bFrozen; // 0xb71            
            uint8_t _pad0b72[0x2]; // 0xb72
            // metadata: MNetworkEnable
            float m_flFreezeTransitionDuration; // 0xb74            
            // metadata: MNetworkEnable
            std::int32_t m_nStopType; // 0xb78            
            // metadata: MNetworkEnable
            bool m_bAnimateDuringGameplayPause; // 0xb7c            
            uint8_t _pad0b7d[0x3]; // 0xb7d
            // metadata: MNetworkEnable
            // m_iEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEffectIndex;
            char m_iEffectIndex[0x8]; // 0xb80            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xb88            
            // metadata: MNetworkEnable
            float m_flPreSimTime; // 0xb8c            
            // metadata: MNetworkEnable
            Vector m_vServerControlPoints[4]; // 0xb90            
            // metadata: MNetworkEnable
            std::uint8_t m_iServerControlPointAssignments[4]; // 0xbc0            
            // metadata: MNetworkEnable
            // m_hControlPointEnts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hControlPointEnts[64];
            char m_hControlPointEnts[0x100]; // 0xbc4            
            // metadata: MNetworkEnable
            bool m_bNoSave; // 0xcc4            
            // metadata: MNetworkEnable
            bool m_bNoFreeze; // 0xcc5            
            // metadata: MNetworkEnable
            bool m_bNoRamp; // 0xcc6            
            bool m_bStartActive; // 0xcc7            
            CUtlSymbolLarge m_iszEffectName; // 0xcc8            
            CUtlSymbolLarge m_iszControlPointNames[64]; // 0xcd0            
            std::int32_t m_nDataCP; // 0xed0            
            Vector m_vecDataCPValue; // 0xed4            
            std::int32_t m_nTintCP; // 0xee0            
            Color m_clrTint; // 0xee4            
            uint8_t _pad0ee8[0x20]; // 0xee8
            bool m_bOldActive; // 0xf08            
            bool m_bOldFrozen; // 0xf09            
            uint8_t _pad0f0a[0x16];
            
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
            // void m_pEffect; // 0xee8
            // void m_iOldEffectIndex; // 0xf10
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ParticleSystem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ParticleSystem) == 0xf20);
    };
};
