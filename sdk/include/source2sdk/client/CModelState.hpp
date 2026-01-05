#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

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
        // Construct disallowed
        // 
        // static metadata: MNetworkVarNames "HModelStrong m_hModel"
        // static metadata: MNetworkVarNames "bool m_bClientClothCreationSuppressed"
        // static metadata: MNetworkVarNames "MeshGroupMask_t m_MeshGroupMask"
        // static metadata: MNetworkVarNames "int32 m_nBodyGroupChoices"
        // static metadata: MNetworkVarNames "int8 m_nIdealMotionType"
        #pragma pack(push, 1)
        class CModelState
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "skeletonModelChanged"
            // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_hModel;
            char m_hModel[0x_]; // 0x_            
            CUtlSymbolLarge m_ModelName; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            bool m_bClientClothCreationSuppressed; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "skeletonMeshGroupMaskChanged"
            std::uint64_t m_MeshGroupMask; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "bodyGroupChoiceChanged"
            // m_nBodyGroupChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::int32_t> m_nBodyGroupChoices;
            char m_nBodyGroupChoices[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "skeletonMotionTypeChanged"
            std::int8_t m_nIdealMotionType; // 0x_            
            std::int8_t m_nForceLOD; // 0x_            
            std::int8_t m_nClothUpdateFlags; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void m_pVPhysicsAggregate; // 0x_
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CModelState, m_hModel) == 0x_);
        static_assert(offsetof(source2sdk::client::CModelState, m_ModelName) == 0x_);
        static_assert(offsetof(source2sdk::client::CModelState, m_bClientClothCreationSuppressed) == 0x_);
        static_assert(offsetof(source2sdk::client::CModelState, m_MeshGroupMask) == 0x_);
        static_assert(offsetof(source2sdk::client::CModelState, m_nBodyGroupChoices) == 0x_);
        static_assert(offsetof(source2sdk::client::CModelState, m_nIdealMotionType) == 0x_);
        static_assert(offsetof(source2sdk::client::CModelState, m_nForceLOD) == 0x_);
        static_assert(offsetof(source2sdk::client::CModelState, m_nClothUpdateFlags) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CModelState) == 0x_);
    };
};
