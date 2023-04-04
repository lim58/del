# [3/31] html tag

생성일: 2023년 4월 3일 오후 10:09

### HTML

> **웹 페이지의 기본 형태**를 만드는 코드
> 

> 여러 태그를 조합한 문서
> 

### TAG

- **head 웹 페이지의 정보, 외부자료 참조**
    
    ---
    
    **title** 문서 제목
    

- **body 문서 내용**
    
    ---
    
    - **문서 메타데이터**
        
        **link** 문서, 외부 리소스 연결
        
        **strong** 텍스트 강조
        
        **style** 디자인 변경 (크기, 색상 등 변경)
        
    
    - **콘텐츠 섹션**
        
        **h1~6** 글의 강조, 제목
        
    
    - **텍스트 콘텐츠**
        
        **div** 특정영역, 구획을 정의 (가상 레이아웃 설정)
        
        **hr** 가로 선
        
        **li** 목록의 항목 (<ol> 정렬목록, <ul> 비정렬 목록) 
        
        **p** 하나의 문단을 나타냄
        
        **pre** 미리 서식을 지정한 텍스트
        
    
    - **인라인 텍스트 시멘틱**
        
        **a** 웹 페이지, 외부사이트 연결 (하이퍼링크를 정의함)
        
        **br** 줄바꿈
        
        **span** 웹 페이지 영역 설정
        
    
    - **이미지 & 멀티미디어**
        
        **img** 이미지 삽입
        
    
    - **표 콘텐츠**
        
        **table** 행과 열로 이루어진 표를 나타냄
        
        - tr 테이블의 한 행
        - th 테이블 헤더
        - td 테이블 내용
    
    - **양식**
        
        **button** 클릭 가능한 버튼
        
        **form** 입력 양식 전체 태그
        
        **input** 입력창 (사용자 양식 입력)
        
        ```html
        <form>
          <input type = "text">  
          <input type = "email">  //이메일 형식
          <input type = "password">  //입력글자 보이지 않음
          <input type = "data">  //날짜 선택
          <input type = "checkbox">
            <div>
              <button type = "submit">  //폼의 내용 제출
            </div>
        ```
        
        **select** 항목 선택
        
    
    ```html
    <select name="coffee">
      <option value ="1"> 아메리카노 </option>
      <option value ="2"> 카페라떼 </option>
    </select>
    ```