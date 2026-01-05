#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/IAnimationGraphInstance.hpp"
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/client/AnimationAlgorithm_t.hpp"
#include "source2sdk/client/CSkeletonAnimationController.hpp"
#include "source2sdk/client/ExternalAnimGraphHandle_t.hpp"
#include "source2sdk/client/ExternalAnimGraph_t.hpp"
#include "source2sdk/client/SequenceFinishNotifyState_t.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcefile/ResourceId_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmGraphDefinition.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseAnimGraph;
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
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< CBaseAnimGraph > m_vecSecondarySkeletons"
        // static metadata: MNetworkVarNames "int m_nSecondarySkeletonMasterCount"
        // static metadata: MNetworkVarNames "HSequence m_hSequence"
        // static metadata: MNetworkVarNames "GameTime_t m_flSeqStartTime"
        // static metadata: MNetworkVarNames "float m_flSeqFixedCycle"
        // static metadata: MNetworkVarNames "AnimLoopMode_t m_nAnimLoopMode"
        // static metadata: MNetworkVarNames "HNmGraphDefinitionStrong m_hGraphDefinitionAG2"
        // static metadata: MNetworkVarNames "AnimationAlgorithm_t m_nAnimationAlgorithm"
        // static metadata: MNetworkVarNames "uint8 m_serializedPoseRecipeAG2"
        // static metadata: MNetworkVarNames "int m_nSerializePoseRecipeSizeAG2"
        // static metadata: MNetworkVarNames "int m_nSerializePoseRecipeVersionAG2"
        // static metadata: MNetworkVarNames "int m_nServerGraphInstanceIteration"
        // static metadata: MNetworkVarNames "int m_nServerSerializationContextIteration"
        // static metadata: MNetworkVarNames "ResourceId_t m_primaryGraphId"
        // static metadata: MNetworkVarNames "ResourceId_t m_vecExternalGraphIds"
        // static metadata: MNetworkVarNames "ResourceId_t m_vecExternalClipIds"
        #pragma pack(push, 1)
        class CBaseAnimGraphController : public source2sdk::client::CSkeletonAnimationController
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MSaveOpsForField
            // m_pAnimGraphInstance has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSmartPtr<source2sdk::animgraphlib::IAnimationGraphInstance> m_pAnimGraphInstance;
            char m_pAnimGraphInstance[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ExternalAnimGraphHandle_t m_nNextExternalGraphHandle; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecSecondarySkeletonNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CGlobalSymbol> m_vecSecondarySkeletonNames;
            char m_vecSecondarySkeletonNames[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSecondarySkeletonsChanged"
            // m_vecSecondarySkeletons has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseAnimGraph>> m_vecSecondarySkeletons;
            char m_vecSecondarySkeletons[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphDefinitionOrModeChanged"
            std::int32_t m_nSecondarySkeletonMasterCount; // 0x_            
            float m_flSoundSyncTime; // 0x_            
            std::uint32_t m_nActiveIKChainMask; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "minusone"
            // metadata: MNetworkChangeCallback "OnNetworkedSequenceChanged"
            // metadata: MNetworkPriority "32"
            source2sdk::animationsystem::HSequence m_hSequence; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flSeqStartTime; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            // metadata: MNetworkPriority "32"
            float m_flSeqFixedCycle; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            // metadata: MNetworkPriority "32"
            source2sdk::client::AnimLoopMode_t m_nAnimLoopMode; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "5,000000"
            // metadata: MNetworkEncodeFlags "8"
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            // metadata: MNetworkPriority "32"
            CNetworkedQuantizedFloat m_flPlaybackRate; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::SequenceFinishNotifyState_t m_nNotifyState; // 0x_            
            bool m_bNetworkedAnimationInputsChanged; // 0x_            
            bool m_bNetworkedSequenceChanged; // 0x_            
            bool m_bLastUpdateSkipped; // 0x_            
            bool m_bSequenceFinished; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTick_t m_nPrevAnimUpdateTick; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphDefinitionOrModeChanged"
            // m_hGraphDefinitionAG2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmGraphDefinition> m_hGraphDefinitionAG2;
            char m_hGraphDefinitionAG2[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphDefinitionOrModeChanged"
            source2sdk::client::AnimationAlgorithm_t m_nAnimationAlgorithm; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_serializedPoseRecipeAG2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint8_t> m_serializedPoseRecipeAG2;
            char m_serializedPoseRecipeAG2[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::int32_t m_nSerializePoseRecipeSizeAG2; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::int32_t m_nSerializePoseRecipeVersionAG2; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphSerializationContextInvalidated"
            std::int32_t m_nServerGraphInstanceIteration; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphSerializationContextInvalidated"
            std::int32_t m_nServerSerializationContextIteration; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphSerializationContextInvalidated"
            source2sdk::resourcefile::ResourceId_t m_primaryGraphId; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphSerializationContextInvalidated"
            // m_vecExternalGraphIds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::resourcefile::ResourceId_t> m_vecExternalGraphIds;
            char m_vecExternalGraphIds[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphSerializationContextInvalidated"
            // m_vecExternalClipIds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::resourcefile::ResourceId_t> m_vecExternalClipIds;
            char m_vecExternalClipIds[0x_]; // 0x_            
            CGlobalSymbol m_sAnimGraph2Identifier; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecExternalGraphs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ExternalAnimGraph_t> m_vecExternalGraphs;
            char m_vecExternalGraphs[0x_]; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void m_pGraphInstanceAG2; // 0x_
            // float m_flCachedSequenceCycleRate; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseAnimGraphController) == 0x_);
    };
};
