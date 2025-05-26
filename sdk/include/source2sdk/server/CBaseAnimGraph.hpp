#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmGraphDefinition.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/PhysicsRagdollPose_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct IChoreoServices;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xab0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkIncludeByName "m_bClientSideRagdoll"
        // static metadata: MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
        // static metadata: MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
        // static metadata: MNetworkVarNames "Vector m_vecForce"
        // static metadata: MNetworkVarNames "int32 m_nForceBone"
        // static metadata: MNetworkVarNames "PhysicsRagdollPose_t m_RagdollPose"
        // static metadata: MNetworkVarNames "bool m_bRagdollEnabled"
        // static metadata: MNetworkVarNames "bool m_bRagdollClientSide"
        // static metadata: MNetworkVarNames "HNmGraphDefinitionStrong m_hAnimGraph2DefinitionNetVar"
        // static metadata: MNetworkVarNames "uint8 m_animGraph2FlagsNetVar"
        // static metadata: MNetworkVarNames "uint8 m_animGraph2SerializeData"
        // static metadata: MNetworkVarNames "int m_nAnimGraph2SerializeDataSizeBytes"
        // static metadata: MNetworkVarNames "int m_animGraph2ReloadCountSV"
        #pragma pack(push, 1)
        class CBaseAnimGraph : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad07c8[0x80]; // 0x7c8
            // metadata: MNetworkEnable
            bool m_bInitiallyPopulateInterpHistory; // 0x848            
            uint8_t _pad0849[0x7]; // 0x849
            source2sdk::client::IChoreoServices* m_pChoreoServices; // 0x850            
            // metadata: MNetworkEnable
            bool m_bAnimGraphUpdateEnabled; // 0x858            
            uint8_t _pad0859[0x3]; // 0x859
            float m_flMaxSlopeDistance; // 0x85c            
            Vector m_vLastSlopeCheckPos; // 0x860            
            bool m_bAnimationUpdateScheduled; // 0x86c            
            uint8_t _pad086d[0x3]; // 0x86d
            // metadata: MNetworkEnable
            Vector m_vecForce; // 0x870            
            // metadata: MNetworkEnable
            std::int32_t m_nForceBone; // 0x87c            
            uint8_t _pad0880[0x10]; // 0x880
            // metadata: MNetworkEnable
            source2sdk::server::PhysicsRagdollPose_t m_RagdollPose; // 0x890            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollEnabledChanged"
            bool m_bRagdollEnabled; // 0x8b8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
            bool m_bRagdollClientSide; // 0x8b9            
            uint8_t _pad08ba[0x15e]; // 0x8ba
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "animGraph2DefinitionChanged"
            // m_hAnimGraph2DefinitionNetVar has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmGraphDefinition> m_hAnimGraph2DefinitionNetVar;
            char m_hAnimGraph2DefinitionNetVar[0x8]; // 0xa18            
            // metadata: MNetworkEnable
            std::uint8_t m_animGraph2FlagsNetVar; // 0xa20            
            uint8_t _pad0a21[0x3f]; // 0xa21
            // metadata: MNetworkEnable
            // m_animGraph2SerializeData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint8_t> m_animGraph2SerializeData;
            char m_animGraph2SerializeData[0x18]; // 0xa60            
            // metadata: MNetworkEnable
            std::int32_t m_nAnimGraph2SerializeDataSizeBytes; // 0xa78            
            // metadata: MNetworkEnable
            std::int32_t m_animGraph2ReloadCountSV; // 0xa7c            
            uint8_t _pad0a80[0x30];
            
            // Datamap fields:
            // void m_pMainGraphController; // 0x840
            // void CBaseAnimGraphChoreoServicesThink; // 0x0
            // float InputSetPlaybackRate; // 0x0
            // CUtlSymbolLarge InputSetBodyGroup; // 0x0
            // void InputBecomeRagdoll; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseAnimGraph) == 0xab0);
    };
};
